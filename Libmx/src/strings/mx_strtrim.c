#include "libmx.h"

char *mx_strtrim(const char *str)
{
    char *result = mx_strnew(mx_strlen(str));

    /* Delete first part */
    while (mx_is_whitespace(*str++));

    str--;

    mx_strcpy(result, str);
    int str_len = mx_strlen(str) - 1;

    while (mx_is_whitespace(str[str_len]))
        result[str_len--] = '\0';

    return result;
}
