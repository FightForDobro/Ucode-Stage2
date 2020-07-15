#include "libmx.h"
//ToDo: Check Memmory
//char *mx_del_extra_spaces(const char *str)
//{
//    char *trimed_string = mx_strtrim(str);
//    char *result = mx_strnew(mx_strlen(trimed_string));
//
//    int space = 0;
//
//    for (int i = 0; trimed_string[i]; i++)
//    {
//        if (mx_is_whitespace(trimed_string[i]))
//            space = 1;
//
//        result[mx_strlen(result)] = trimed_string[i];
//
//        if (space)
//        {
//            while (mx_is_whitespace(trimed_string[i]))
//                i++;
//            i--;
//        }
//
//        space = 0;
//    }
//
//    mx_strdel(&trimed_string);
//
//    return result;
//}


char *mx_del_extra_spaces(const char *str) {
    char *new_str = mx_strtrim(str);
    char *res;
    int i = 0;
    int j = 0;

    while (new_str[i] != '\0') {
        if (mx_is_whitespace(new_str[i])) {
            new_str[j] = ' ';
            j++;
            while (mx_is_whitespace(new_str[i]))
                i++;
        }
        new_str[j++] = new_str[i++];
    }
    new_str[j] = '\0';
    res = mx_strnew(j);
    res = mx_strncpy(res, new_str, j + 1);
    mx_strdel(&new_str);
    return res;
}
