//#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (mx_strcmp(arr[j], arr[j + 1]) > 0)
            {
                count++;
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return count;
}

//int main()
//{
//    char *arr[] = {"abc", "xyz", "ghi", "def"};
//
//    printf("%d - { ", mx_bubble_sort(arr, 4));
//
//    for (int i = 0; i < 5; i++)
//        printf("%s, ", arr[i]);
//
//    printf(" }\n");
//
//    char *arr1[] = {"abc", "acb", "a"};
//
//    printf("%d - { ", mx_bubble_sort(arr1, 3));
//
//    for (int i = 0; i < 3; i++)
//        printf("%s, ", arr1[i]);
//
//    printf(" }\n");
//}
