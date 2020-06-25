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

#include <stdio.h>

int main() {

    char *src = "JenjaLox";
    char *dst = mx_strnew(100);

    mx_strcpy(dst, src);

    printf("%s", dst);

    return 0;
}
