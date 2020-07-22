#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd)
{
    if (fd == -1 || buf_size <= 0) return -2;

    static char *rem = NULL;
    int index;
    char *buf = mx_strnew(buf_size);
    int r;
    *lineptr += mx_strlen(*lineptr);

    while ((r = read(fd, buf, buf_size)))
    {
        if (rem == NULL)
            index = mx_get_char_index(buf, delim);

        else
            index = mx_get_char_index(rem, delim);

        if (index != -1)
        {
            if (rem != NULL)
            {
                buf = mx_strjoin(rem, buf);
                mx_strdel(&rem);
            }

            rem = mx_strdup(&buf[index + 1]);
            buf[index] = '\0';
            *lineptr = mx_strjoin(*lineptr, buf);
            break;
        } else {
            if (rem != NULL)
            {
                *lineptr = mx_strjoin(*lineptr, rem);
                mx_strdel(&rem);
            }

            buf[index] = '\0';
            *lineptr = mx_strjoin(*lineptr, buf);
        }
    }

    if (r < 0) return -1;

    return mx_strlen(*lineptr);
}
