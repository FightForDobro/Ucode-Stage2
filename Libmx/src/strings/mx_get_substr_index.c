#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub)
{

    int sub_len = mx_strlen((char *)sub);

    if (!str || !sub || !*str || !*sub)
        return -2;

    for (int i = 0; str[i]; i++)
        if (str[i] == sub[0])
            if(mx_strncmp((char *)(str + i), (char *)sub, sub_len) == 0)
                return i;

    return -1;
}
