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
