//#include <stdio.h>

int mx_strlen(const char *s)
{
    int len = 0;

    while (*s++) len++;

    return len;
}

//int main()
//{
//    printf("%d", mx_strlen("This line has 27 characters"));
//}
