//#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2)
{
    while (*s1)
        if (*s1++ != *s2++)
            return *--s1 - *--s2;

    return *s1 - *s2;
}

//int main()
//{
//    printf("%d\n", mx_strcmp("A", "A"));
//    printf("%d\n", mx_strcmp("A", "X"));
//    printf("%d\n", mx_strcmp("A", "B"));
//    printf("%d\n", mx_strcmp("B", "A"));
//    printf("%d\n", mx_strcmp("X", "A"));
//    printf("%d\n", mx_strcmp("Hello Denys", "Hello Dimitri"));
//}
