#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd)
{
    char buf[buf_size];
    int bytes_in_lptr = read(fd, &buf, buf_size);

    int len_of_line = mx_strlen(*lineptr);

    while (bytes_in_lptr)
    {
        if (*buf == delim)
            return bytes_in_lptr;

        mx_strncat(*lineptr, buf, buf_size);
        bytes_in_lptr += read(fd, &buf, buf_size);
    }

    *lineptr[len_of_line + bytes_in_lptr] = '\0';

    return bytes_in_lptr;
}
