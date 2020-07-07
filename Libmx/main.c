#include "libmx.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

#define FUNC_COUNT 21

int main(int argc, char **argv)
{
    char *functions[FUNC_COUNT] = {"printchar", "unicode", "printstr", "printstr_arr", "printint", "pow", "sqrt", "nbr_to_hex", "hex_to_nbr", "foreach",
                                   "binary_search", "bubble_sort", "quick_sort", "strlen", "swapchr", "revers_str", "strdel", "del_str_attr",
                                   "get_char_index", "strdup", "strndup"};

    if (strcmp(argv[1], "choose") == 0)
    {

        while (1)
        {
            setbuf(stdout, NULL);

            printf("Choose:\n");

            printf("-1: Exit\n");
            for (int i = 0; i < FUNC_COUNT; i++)
                printf("%d: %s\n", i, functions[i]);

            printf("\nEnter here: ");

            int result;
            scanf("%d", &result);

            if (result > FUNC_COUNT || result < -1)
            {
                fprintf(stderr, "\nERROR: Wrong Number\nYour number is: %d\nEnter number between 0-%d\n", result, FUNC_COUNT);
                system("clear");
                continue;
            }

            if (result == -1)
                exit(0);

            argv[1] = functions[result];
            break;
        }
    }

    if (strcmp(argv[1], "printchar") == 0)
        mx_printchar('a');

    else if (strcmp(argv[1], "unicode") == 0)
    {
        wchar_t c = L'£';
        mx_print_unicode(c);
    }

    else if (strcmp(argv[1], "printstr") == 0)
        mx_printstr("Hello Ucode!");

    else if (strcmp(argv[1], "printstr_arr") == 0)
    {
        char *arr[] = {"Hello", "Ucode", "!", NULL};
        mx_print_strarr(arr, "*");
    }

    else if (strcmp(argv[1], "printint") == 0)
        mx_printint(1337);

    else if (strcmp(argv[1], "pow") == 0)
        mx_printint((int)mx_pow(2, 5));

    else if (strcmp(argv[1], "sqrt") == 0)
        mx_printint(mx_sqrt(4));

    else if (strcmp(argv[1], "nbr_to_hex") == 0)
        mx_printstr(mx_nbr_to_hex(4294967295));

    else if (strcmp(argv[1], "hex_to_nbr") == 0)
        printf("%lu", mx_hex_to_nbr("FFFFFFFF"));

    else if (strcmp(argv[1], "foreach") == 0)
    {
        int arr[3] = {1, 2, 3};
        mx_foreach(arr, 3, mx_printint);
    }

    else if (strcmp(argv[1], "binary_search") == 0)
    {
        char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
        int count = 0;
        int result;
        result = mx_binary_search(arr, 6, "ab", &count); //returns 3 and count = 3
        printf("%d | %d\n", result, count);
        result = mx_binary_search(arr, 6, "aBc", &count); //returns 2 and count = 1
        printf("%d | %d\n", result, count);
        result = mx_binary_search(arr, 6, "aBz", &count); //returns -1 and count = 0
        printf("%d | %d\n", result, count);
    }

    else if (strcmp(argv[1], "bubble_sort") == 0)
    {
        char *arr[] = {"abc", "xyz", "ghi", "def"};
        mx_printint(mx_bubble_sort(arr, 4)); //returns 3

        char *arr1[] = {"abc", "acb", "a"};
        mx_printint(mx_bubble_sort(arr1, 3)); //returns 2
    }

    else if (strcmp(argv[1], "quick_sort") == 0)
    {
        char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
        mx_printint(mx_quicksort(arr, 0, 3)); //returns 2

        char *arr1[] = {"DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Biff Tannen"};
        mx_printint(mx_quicksort(arr1, 0, 5)); //returns 2
    }

    /* Strings Pack */

    else if (strcmp(argv[1], "strlen") == 0)
        mx_printint(mx_strlen("Hello Ucode!"));

    else if (strcmp(argv[1], "swapchr") == 0)
    {
        char string[] = "ONE";
        mx_swap_char(&string[0], &string[1]);
        mx_printstr(string);

        mx_swap_char(&string[1], &string[2]);
        mx_printstr(string);
    }

    else if (strcmp(argv[1], "revers_str") == 0)
    {
        char string[] = "game over";
        mx_str_reverse(string);
        mx_printstr(string);
    }

    else if (strcmp(argv[1], "strdel") == 0)
    {
        char *string = malloc(sizeof(char) * 17);
        mx_strdel(&string);
        printf("%s", string);
    }

    else if (strcmp(argv[1], "del_str_attr") == 0)
    {
        char **arr = malloc(sizeof(char *) * 7);
        arr[6] = NULL;

        char *string = malloc(sizeof(char) * 17);
        string[0] = 'a';
        char *string1 = malloc(sizeof(char) * 17);
        string1[0] = 'a';
        char *string2 = malloc(sizeof(char) * 17);
        string2[0] = 'a';
        char *string3 = malloc(sizeof(char) * 17);
        string3[0] = 'a';
        char *string4 = malloc(sizeof(char) * 17);
        string4[0] = 'a';
        char *string5 = malloc(sizeof(char) * 17);
        string5[0] = 'a';

        arr[0] = string;
        arr[1] = string1;
        arr[2] = string2;
        arr[3] = string3;
        arr[4] = string4;
        arr[5] = string5;

        mx_del_strarr(&arr);
        printf("%s", string);
    }

    else if (strcmp(argv[1], "get_char_index") == 0)
    {
        char *string = "Hello";
        char *string1 = "Hello";
        char *string2 = NULL;

        mx_printint(mx_get_char_index(string, 'H'));
        mx_printint(mx_get_char_index(string1, '0'));
        mx_printint(mx_get_char_index(string2, 'H'));
    }

    else if (strcmp(argv[1], "strdup") == 0)
    {
        char *string = "Some Cool Text!";
        char *duped_string = mx_strdup(string);
        mx_printstr(duped_string);
    }

    else if (strcmp(argv[1], "strndup") == 0)
    {

    }

}