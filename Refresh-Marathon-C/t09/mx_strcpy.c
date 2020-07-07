//#include <stdio.h>

char *mx_strcpy(char *dst, const char *src)
{
    for (int i = 0; (dst[i] = src[i]) != '\0'; i++);

    return dst;
}

//int main()
//{
//    char dst[10];
//    char *src = "123456789";
//
//    mx_strcpy(dst, src);
//
//    printf("%s", dst);
//}
