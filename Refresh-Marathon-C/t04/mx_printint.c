#include "unistd.h"

void mx_printchar(char c);

void mx_printint(int n)
{
    if(n == -2147483648)
    {
        write(1, "-2147483648", 11);
    }

    else
    {
        if (n < 0) {
            mx_printchar('-');
            n = -n;
        }

        if (n / 10)
            mx_printint(n / 10);

        mx_printchar(n % 10 + '0');
    }
}

//int main()
//{
//    mx_printint(0);
//    mx_printchar('\n');
//    mx_printint(8);
//    mx_printchar('\n');
//    mx_printint(-1);
//    mx_printchar('\n');
//    mx_printint(-2147483648);
//    mx_printchar('\n');
//    mx_printint(2147483647);
//}
