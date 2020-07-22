#include "libmx.h"

/**
 * Compare s1 and s2 and to n
 * @param s1 First string
 * @param s2 Second string
 * @param n number of bytes to check
 * @return deference of incorrect char
 */
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
