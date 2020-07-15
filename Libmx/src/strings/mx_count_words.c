#include "libmx.h"

int mx_count_words(const char *str, char c)
{
    if (!str || !c || !*str)
        return -1;

    char substr[2];
    substr[0] = c;
    substr[1] = '\0';

    str = mx_delete_trailing((char *)str, c);

    int sub_count = mx_count_substr(str, substr);

    int result = 0;

    if (str[0] == c || str[mx_strlen((char *)str) - 1])
        result -= 1;

    if ((sub_count & 1) == 1 && sub_count > 1)
        result += 1;

    if (sub_count == 1 && !(str[0] == c || str[mx_strlen((char *)str) - 1] == c))
        result += 1;

    return result + sub_count;
}
