#include "libmx.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

#define FUNC_COUNT 45


int main(int argc, char **argv)
{
    char *functions[FUNC_COUNT] = {"printchar", "unicode", "printstr", "printstr_arr", "printint", "pow", "sqrt", "nbr_to_hex", "hex_to_nbr", "itoa", "foreach",
                                   "binary_search", "bubble_sort", "quick_sort", "strlen", "swapchr", "revers_str", "strdel", "del_str_attr",
                                   "get_char_index", "strdup", "strndup", "strcpy", "strncpy", "strcat", "strstr", "sub_str_index", "count_substr", "count_words",
                                   "strnew", "trim", "del_extra_space", "split", "join", "file_to_str", "read_line", "replace_substr", "memset", "memcpy", "memccpy",
                                   "memcmp", "memchr", "memrchr", "memmem", "memmove"};

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
        wchar_t c = 0x110000 - 1;
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
        printf("%lu", mx_hex_to_nbr(NULL));

    else if (strcmp(argv[1], "itoa") == 0)
    {
        mx_printstr(mx_itoa(0));
        mx_printstr(mx_itoa(1));
        mx_printstr(mx_itoa(-100));
        mx_printstr(mx_itoa(200));
        mx_printstr(mx_itoa(2147483647));
    }
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
        char *string = "Some Cool Text!";
        char *duped_string = mx_strndup(string, 6);
        mx_printstr(duped_string);
    }

    else if (strcmp(argv[1], "strcpy") == 0)
    {
        char *dst = malloc(10);
        dst[9] = 'a';
        char *src = "123456789";

        mx_strcpy(dst, src);

        printf("%s", dst);
    }

    else if (strcmp(argv[1], "strncpy") == 0)
    {
        char dst[25];

        char *src = "123456789";

        mx_strncpy(dst, src, 25);

        printf("%s", dst);
    }

    else if (strcmp(argv[1], "strcat") == 0)
    {
        char dst[6];

        dst[0] = 'a';
        dst[1] = 'a';
        dst[2] = 'a';
        dst[3] = '\0';
        dst[4] = '\0';
        dst[5] = '\0';
        char *src = "bb";
        mx_strcat(dst, src);

        printf("%s", dst);

    }

    else if (strcmp(argv[1], "strstr") == 0)
    {
        char *s1 = "Hello ol Hello ol";
        char *result = mx_strstr(s1, "");
        printf("%s", result);
    }

    else if (strcmp(argv[1], "sub_str_index") == 0)
    {
        mx_printint(mx_get_substr_index("Hello ol Hello ol", ""));
        mx_printint(mx_get_substr_index("McDonalds", "Don")); //returns 2
        mx_printint(mx_get_substr_index("McDonalds Donuts", "on")); //returns 3
        mx_printint(mx_get_substr_index("McDonalds", "Donatello")); //returns -1
        mx_printint(mx_get_substr_index("McDonalds", NULL)); //returns -2
        mx_printint(mx_get_substr_index(NULL, "Don")); //returns -2
    }

    else if (strcmp(argv[1], "count_substr") == 0)
    {
        char *str = "yo, yo, yo,   4332   \n    d  a   yo Neo";
        char *sub = "yo";
        mx_printint(mx_count_substr(str, sub)); //returns 4
        mx_printint(mx_count_substr(str, NULL)); //returns -1
        mx_printint(mx_count_substr(NULL, sub)); //returns -1
    }

    else if (strcmp(argv[1], "count_words") == 0)
    {
//        char *str = " f o l l o w t h e w h i t e r a b b i t ";
        char *str = "**Good bye,**Mr.*Anderson.****";
        mx_printint(mx_count_words(str, '*')); //returns 20

        mx_printint(mx_count_words(NULL, ' ')); //returns -1
    }

    else if (strcmp(argv[1], "strnew") == 0)
    {
        char *string = mx_strnew(10);
        for (int i = 0; i <= 10; i++)
            string[i] = 'a';

        printf("%s", string);
    }

    else if (strcmp(argv[1], "trim") == 0)
    {
        char *name = "\f   My name... is Neo    \t\n";
        printf("%s", mx_strtrim(name)); //returns "My name... is Neo"
    }

    else if (strcmp(argv[1], "del_extra_space") == 0)
    {
        char *name = "\f     My name...is \r Neo      \t\n";
        printf("%s", mx_del_extra_spaces(name)); //returns "My name... is Neo"
    }

    else if(strcmp(argv[1], "split") == 0)
    {
        char *s = "**Good bye,**Mr.*Anderson.****";
        char **arr = mx_strsplit(s, '*');// arr = ["Good bye,", "Mr.", "Anderson."]

        for (int i = 0; i < 3; i++)
            printf("%s\n", arr[i]);

        s = "Knock, knock,    Neo.   ";
        arr = mx_strsplit(s, ' '  );// arr = ["Knock,", "knock,", "Neo."]

        for (int i = 0; i < 3; i++)
            printf("%s\n", arr[i]);
    }

    else if (strcmp(argv[1], "join") == 0)
    {
        char *str1 = "this";
        char *str2 = "dodge ";
        char *str3 = NULL;

        mx_strjoin(str2, str1); //returns "dodge this"
        printf("%s", str3);

        mx_strjoin(str1, str3); //returns "this"
        printf("%s", str3);

        mx_strjoin(str3, str3); //returns NULL
        printf("%s", str3);
        mx_strdel(&str3);
    }

    else if (strcmp(argv[1], "file_to_str") == 0)
    {
        printf("%s", mx_file_to_str("/Users/dushakov/CLionProjects/Ucode-Stage2/Libmx/assests/file_to_str.txt"));
    }

    else if (strcmp(argv[1], "read_line") == 0)
    {
        char *string = mx_strnew(1000);
        int fd = open("/Users/dushakov/CLionProjects/Ucode-Stage2/Libmx/assests/read_line.txt", O_RDONLY);
        int res = mx_read_line(&string, 15, 'a', fd);
        int res1 = mx_read_line(&string, 60, '9', fd);
//        int res1 = mx_read_line(&string, 60, '9', fd);
        printf("%s", string);
    }

    else if (strcmp(argv[1], "replace_substr") == 0)
        printf("Under Construction");

    else if (strcmp(argv[1], "memset") == 0)
    {
        char *string = mx_strnew(10);

        printf("%s\n", mx_memset(string, 'c', 10));
        printf("%s", string);
    }

    else if (strcmp(argv[1], "memcpy") == 0)
    {
        char *string = mx_strnew(100);
        string[0] = '1';
        string[1] = '.';
        string[2] = ' ';

        char *src= "Game World!";


        printf("%s\n", mx_memcpy(string, src, 11));
        printf("%s", string);
    }

    else if (strcmp(argv[1], "memccpy") == 0)
    {
        char *string = mx_strnew(100);
        string[0] = '1';
        string[1] = '.';
        string[2] = ' ';

        char *src= "Game World!";

        printf("%s\n", mx_memccpy(string, src, 'W', 11));
        printf("%s", string);
    }

    else if (strcmp(argv[1], "memcmp") == 0)
    {
        char *s1 = "Hellb";
        char *s2 = "Hella";

        printf("%d", mx_memcmp(s1, s2, 6));
    }

    else if (strcmp(argv[1], "memchr") == 0)
    {
        char *s1 = "Hello";

        printf("%s", mx_memchr(s1, 'l', 6));
    }

    else if (strcmp(argv[1], "memrchr") == 0)
    {
        printf("%s", mx_memrchr("Trinity", 'i', 7)); //returns "ity"
        printf("%s", mx_memrchr("Trinity", 'M', 7)); //returns NULL
    }

    else if (strcmp(argv[1], "memmem") == 0)
    {
        char *big_s = "Hello ol Hello";
        char *little_s = "ol";

        printf("%s\n", memmem(big_s, mx_strlen(big_s), little_s, mx_strlen(little_s)));
        printf("%s", mx_memmem(big_s, mx_strlen(big_s), little_s, mx_strlen(little_s)));
    }

    else if (strcmp(argv[1], "memmove") == 0)
    {
        char *dst = malloc(3);
        const char *src = "Heooo:";

        printf("Original: %s | new: %s", mx_memmove(dst, src, mx_strlen(src)), dst);
    }

    else if (strcmp(argv[1], "realloc") == 0)
    {

    }

}
