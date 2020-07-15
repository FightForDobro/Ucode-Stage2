#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len)
{
    while (len-- && *src)
    {
        *dst = *src++;
        dst++;
    }

    *dst = *src;

    return dst;
}
