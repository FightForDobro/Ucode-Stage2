#include "libmx.h"

/**
 *
 * • returns the index of the first occurrence
 * • returns-1  if no occurrence is found
 * • returns-2  if the string does not exist
 *
 * @brief finds the index of the first occurrence of the character c  in a string str . A string is a sequence of characters, excludingNULLin the end.
 * @author Denys Ushakov
 * @version a-1.0
 * @date 7/7/2020
 * @example
 */

int mx_get_char_index(const char *str, char c)
{
    if (!str)
        return -2;

    int index = 0;

    while (str[index])
    {
        if (str[index] == c)
            return index;

        index++;
    }

    return -1;
}
