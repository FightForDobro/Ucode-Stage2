//#include <stdio.h>

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

//int main()
//{
//    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//    int count = 0;
//    printf("%d\n", mx_binary_search(arr, 6, "ab", &count));
//    //returns 3 and count = 3
//    count = 0;
//    printf("%d\n", mx_binary_search(arr, 6, "aBc", &count));
//    // returns 2 and count = 1
//    count = 0;
//    printf("%d\n", mx_binary_search(arr, 6, "aBz", &count));
//    // returns -1 and count = 0
//}
