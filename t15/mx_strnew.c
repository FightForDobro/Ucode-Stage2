#include <stdlib.h>
//#include <stdio.h>

char *mx_strnew(const int size)
{
    if (size < 0)
        return NULL;

    char *string = malloc(size + 1);

    if (!string)
        return NULL;

    for (int i = 0; i <= size; i++)
    {
        string[i] = '\0';
    }

    return string;
}

//int main()
//{
//    char *string = mx_strnew(9);
//
//    for (int i = 0; i <= 9; i++)
//        string[i] = i + 48;
//
//    printf("%s", string);
//}
