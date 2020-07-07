#include "libmx.h"

int mx_quicksort(char **arr, int low, int high) {

    if (arr == NULL || *arr == NULL)
        return -1;

    if (low >= high)
        return 0;

    int swaps = 0;

    int middle = low + (high - low) / 2;
    char *pivot = arr[middle];


    int i = low;
    int j = high;

    while (i <= j) {

        while (mx_strlen(arr[i]) - mx_strlen(pivot) < 0)
            i++;

        while (mx_strlen(arr[j]) - mx_strlen(pivot) > 0)
            j--;


        if (i <= j)
        {
            str_swap(&arr[i], &arr[j], &swaps);
            i++;
            j--;
        }
    }

    if (low < j)
        swaps += mx_quicksort(arr, low, j);

    if (high > i)
        swaps += mx_quicksort(arr, i, high);

    return swaps;
}
