//#include <stdio.h>

double mx_pow(double n, unsigned int pow)
{
    if (pow != 0)
        return (n * mx_pow(n, pow - 1));
    else
        return 1;
}

//int main()
//{
//    printf("%f\n", mx_pow(0, 0));
//    printf("%f\n", mx_pow(1, 0));
//    printf("%f\n", mx_pow(1, 1));
//    printf("%f\n", mx_pow(1, 2));
//    printf("%f\n", mx_pow(5, 5));
//    printf("%f\n", mx_pow(8, 2));
//    printf("%f\n", mx_pow(10, 4));
//}
