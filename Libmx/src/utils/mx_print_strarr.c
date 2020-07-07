#include "libmx.h"

/**
 * @brief Print array of strings
 * @author Denys Ushakov
 * @version a-1.0
 * @date 7/1/2020
 * @example mx_print_strarr({"Car", "Cow", "Plane"}, "*");
 */

void mx_print_strarr(char **arr, const char *delim)
{
    if (arr == NULL || *arr == NULL || delim == NULL)
        return;


    mx_printstr(arr[0]);
    for (int i = 1; arr[i] != NULL; i++)
    {
        mx_printstr(delim);
        mx_printstr(arr[i]);
    }

    mx_printchar('\n');
}
