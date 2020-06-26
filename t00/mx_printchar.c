#include <unistd.h>

void mx_printchar(char c)
{
    write(1, &c, 1);
}

//int main()
//{
//    mx_printchar('a');
//    mx_printchar('1');
//    mx_printchar('b');
//    mx_printchar('d');
//    mx_printchar('s');
//    mx_printchar('\n');
//    mx_printchar('q');
//    mx_printchar('w');
//    mx_printchar('e');
//}
