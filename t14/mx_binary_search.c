int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count)
{

    if (!count)
        return -1;

    if (size <= 0)
        return -1;

    if (!s || !arr)
        return -1;

    *count = 0;

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        (*count)++;

        int mid = left + (right - left) / 2;

        if (mx_strcmp(s, arr[mid]) < 0)
            right = mid -1;

        else if (mx_strcmp(s, arr[mid]) > 0)
            left = mid + 1;

        else
            return mid;
    }

    *count = 0;

    return -1;
}
