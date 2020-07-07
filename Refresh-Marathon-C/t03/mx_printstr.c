#include "unistd.h"

int mx_strlen(const char *s);

void mx_printstr(const char *s)
{
    write(1, s, mx_strlen(s));
}

//int main()
//{
//    mx_printstr("Hello Strings!");
//    mx_printstr("Oracle 100 Points!");
//    mx_printstr("\nHello Strings 2!\n");
//}
