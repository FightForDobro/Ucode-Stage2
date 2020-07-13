#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2)
{

    // Move to end of s1
    while (*s1++);

    while (*s2)
    {
        *s1 = *s2++;
        s1++;
    }

    return s1;
}
