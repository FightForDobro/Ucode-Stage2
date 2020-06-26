//#include <stdio.h>

int convert_letters(char c)
{
    if (c >= 48 && c <= 57)
        return c - 48;

    else if (c >= 97 && c <= 102)
        return c - 97 + 10;

    else if (c >= 65 && c <= 70)
        return  c - 65 + 10;

    else return 0;
}

unsigned long mx_hex_to_nbr(const char *hex)
{
    unsigned long n;

    char *s = (char *) hex;

    n = 0;

    while (*s)
    {
        n = 16 * n + convert_letters(*s);
        s++;
    }

    return n;
}

//int main()
//{
//    printf("%lu\n", mx_hex_to_nbr("0"));
//    printf("%lu\n", mx_hex_to_nbr("1"));
//    printf("%lu\n", mx_hex_to_nbr("2"));
//    printf("%lu\n", mx_hex_to_nbr("A"));
//    printf("%lu\n", mx_hex_to_nbr("1A"));
//    printf("%lu\n", mx_hex_to_nbr("F"));
//    printf("%lu\n", mx_hex_to_nbr("FF1"));
//}
