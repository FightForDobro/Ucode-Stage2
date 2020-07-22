#include "libmx.h"

int mx_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && n)
    {
        if (s1[i] == '\0')
            return 0;

        i++;
        n--;
    }

    return s1[i - 1] - s2[i - 1];
}