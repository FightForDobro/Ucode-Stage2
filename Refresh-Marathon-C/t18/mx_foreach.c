//#include "unistd.h"

void mx_foreach(int *arr, int size, void(*f)(int))
{
    for (int i = 0; i < size; i++)
        f(arr[i]);

}

//void mx_printchar(char c)
//{
//    write(1, &c, 1);
//}
//
//void mx_printint(int n)
//{
//    if(n == -2147483648)
//    {
//        write(1, "-2147483648", 11);
//    }
//
//    else
//    {
//        if (n < 0) {
//            mx_printchar('-');
//            n = -n;
//        }
//
//        if (n / 10)
//            mx_printint(n / 10);
//
//        mx_printchar(n % 10 + '0');
//    }
//}
//
//int main() {
//
//    int a[5] = {1, 2, 3, 4, 5};
//
//    mx_foreach(a, 5, mx_printint);
//
//    return 0;
//}
