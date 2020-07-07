//#include <stdio.h>

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

//int main()
//{
//    int arr[5] = {4, 3, 2, 1, 0};
//    int arr1[5] = {2, 4, 3, 5, 1};
//    int arr2[5] = {4, 3, 3, 2, 1};
//    int arr3[5] = {6, 8, 6, 2, 0};
//
//    mx_sort_arr_int(arr, 5);
//    mx_sort_arr_int(arr1, 5);
//    mx_sort_arr_int(arr2, 5);
//    mx_sort_arr_int(arr3, 5);
//
//    for (int i = 0; i < 5; i++)
//        printf("%d, ", arr[i]);
//
//    printf("\n");
//
//    for (int i = 0; i < 5; i++)
//        printf("%d, ", arr1[i]);
//
//    printf("\n");
//
//    for (int i = 0; i < 5; i++)
//        printf("%d, ", arr2[i]);
//
//    printf("\n");
//
//    for (int i = 0; i < 5; i++)
//        printf("%d, ", arr3[i]);
//
//    printf("\n");
//}
