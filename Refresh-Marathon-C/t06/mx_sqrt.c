//#include <stdio.h>

int mx_sqrt(int x)
{
    if (x == 0)
        return 0;

    else if (x == 1)
        return 1;

    for (int i = 0; i <= x / 2; i++)
    {
        if (i * i == x)
            return i;
    }

    return 0;
}

//int main()
//{
//    printf("%d\n", mx_sqrt(4));
//    printf("%d\n", mx_sqrt(2));
//    printf("%d\n", mx_sqrt(0));
//    printf("%d\n", mx_sqrt(8));
//    printf("%d\n", mx_sqrt(1));
//    printf("%d\n", mx_sqrt(10));
//    printf("%d\n", mx_sqrt(16));
//    printf("%d\n", mx_sqrt(36));
//}
