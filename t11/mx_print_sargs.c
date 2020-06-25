void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);

void sort_args(char **args, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int rem = i;

        for (int j = i + 1; j < size; j++)
            if (mx_strcmp(args[j], args[rem]) < 0)
                rem = j;

        char *temp = args[i];
        args[i] = args[rem];
        args[rem] = temp;

    }
}

int main(int argc, char **argv)
{
    if (argc <= 1)
        return 0;

    sort_args(argv, argc - 1);

    for (int i = 1; i < argc; i++)
    {
        mx_printchar(argv[i]);
        mx_printchar('\n');
    }

    return 0;
}
