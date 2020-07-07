#include "libmix.h"


char *mx_itoa(int number)
{
    /* Variable Definitions */
    char *result;

    /* Base Case */
    if (number == -2147483648)
    {
        result = malloc(sizeof(char) * 12);
        result = "-2147483648";
        return result;
    }
    else if (number == 0)
    {
        result = malloc(sizeof(char) * 1);
        result = "0";
        return result;
    }

    int num_len = mx_intlen(number); // Get digit count;
    result = malloc(sizeof(char) * num_len + 2); //TODO use function new string

    if (number < 0)
    {
        result[0] = '-';
        number *= -1;
        num_len++;
    }

    result[num_len] = '\0';

    /* Fill array */
    while (number)
    {

        result[--num_len] = (char)((number % 10) + 48); // Get last digit and convert it to char;

        number /= 10; // Remove last digit

    }

    return result;
}
