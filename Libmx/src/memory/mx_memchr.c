#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n)
{
    unsigned char *string = (unsigned char *)s;

    for (size_t i = 0; i < n; i++)
        if (string[i] == (unsigned char) c)
            return string + i;

    return NULL;
}
