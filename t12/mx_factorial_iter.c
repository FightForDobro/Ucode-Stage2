#include <stdio.h>

int mx_factorial_iter(int n)
{
    if (n > 12 || n < 0)
        return 0;

    if (n == 0 || n == 1)
        return 1;

    int result = 1;

    for (int fact = 1; fact != n + 1; fact++)
        result *= fact;

    return result;
}

//int main()
//{
//    printf("%d\n", mx_factorial_iter(-1));
//    printf("%d\n", mx_factorial_iter(0));
//    printf("%d\n", mx_factorial_iter(1));
//    printf("%d\n", mx_factorial_iter(2));
//    printf("%d\n", mx_factorial_iter(3));
//    printf("%d\n", mx_factorial_iter(4));
//    printf("%d\n", mx_factorial_iter(5));
//    printf("%d\n", mx_factorial_iter(6));
//    printf("%d\n", mx_factorial_iter(7));
//    printf("%d\n", mx_factorial_iter(8));
//    printf("%d\n", mx_factorial_iter(9));
//    printf("%d\n", mx_factorial_iter(10));
//    printf("%d\n", mx_factorial_iter(11));
//    printf("%d\n", mx_factorial_iter(12));
//    printf("%d\n", mx_factorial_iter(13));
//}
