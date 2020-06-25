void mx_printchar(char c);
void mx_print_alphabet(void);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
void mx_sort_arr_int(int *arr, int size);
int mx_strcmp(const char *s1, const char *s2);
int mx_factorial_iter(int n);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
unsigned long mx_hex_to_nbr(const char *hex);
void mx_foreach(int *arr, int size, void(*f)(int));

#include <stdio.h>

int main() {

    int a[5] = {1, 2, 3, 4, 5};

    mx_foreach(a, 5, mx_printint);

    return 0;
}
