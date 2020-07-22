#include "libmx.h"

/**
 * Function counts words in string dived by delimiter
 * @param str String
 * @param c Delimiter
 * @return words count
 */
int mx_count_words(const char *str, char c){
    if (!str || !c || !*str)
        return -1;

    char substr[2] = {c, '\0'};

    char *new_str = mx_delete_trailing((char *)str, c);

    int sub_count = mx_count_substr(new_str, substr);

    int result = 0;

    if (new_str[0] == c || new_str[mx_strlen(new_str) - 1])
        result -= 1;

    if ((sub_count & 1) == 1 && sub_count > 1)
        result += 1;

    if (sub_count == 1 && !(new_str[0] == c || new_str[mx_strlen((char *)new_str) - 1] == c))
        result += 1;
    mx_strdel(&new_str);
    return result + sub_count;
}
