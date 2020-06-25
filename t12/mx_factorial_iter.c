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
