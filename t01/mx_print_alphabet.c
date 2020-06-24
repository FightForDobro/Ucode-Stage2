void mx_printchar(char c);

void mx_print_alphabet(void)
{
    for (int i = 97; i <= 122; i++)
        mx_printchar(i - (i & 1) * 32);

    mx_printchar('\n');
}