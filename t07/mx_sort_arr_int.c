void mx_sort_arr_int(int *arr, int size)
{
    int rem;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                rem = arr[i];
                arr[i] = arr[j];
                arr[j] = rem;
            }
        }
    }
}