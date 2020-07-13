#include "libmx.h"

int mx_strncmp(char *s1, char *s2, int n)
{

    while (n && *s1)
    {
        if (*s1 != *s2)
            return *s1 - *s2;

        s1++;
        s2++;
        n--;
    }

    return 0;
}