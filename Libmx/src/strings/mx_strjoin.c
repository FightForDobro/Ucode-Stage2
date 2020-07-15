#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2)
{
    char *result;

    if (!s1 && !s2)
        return NULL;

    else if (!s1)
    {
        result = mx_strnew(mx_strlen(s2));
        mx_strcpy(result, s2);
        return result;
    }
    else if (!s2)
    {
        result = mx_strnew(mx_strlen(s1));
        mx_strcpy(result, s1);
        return result;
    }

    result = mx_strnew(mx_strlen(s1) + mx_strlen(s2));

    while (*s1)
        result[mx_strlen(result)] = *s1++;

    while (*s2)
        result[mx_strlen(result)] = *s2++;

    if (!result)
        return NULL;

    return result;
}
