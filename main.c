void mx_printchar(char c);
void mx_print_alphabet(void);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
void mx_sort_arr_int(int *arr, int size);


int main() {

    int arr[5] = {3, 5, 2, 0, 1};
    mx_sort_arr_int(arr, 5);

    return 0;
}
