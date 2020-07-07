#ifndef ULIB_LIBMX_H
#define ULIB_LIBMX_H

#include <unistd.h>
#include <wchar.h>
#include <stdlib.h>

/* Utils Pack */
void mx_printchar(char c);
void mx_print_unicode(wchar_t c);
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);

void mx_printint(int n);
int mx_intlen(int num);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
char *mx_nbr_to_hex(unsigned long nbr);
unsigned long mx_hex_to_nbr(const char *hex);
int mx_get_hex_digits_count(unsigned long num);
char *mx_itoa(int number);
void mx_foreach(int *arr, int size, void(*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_quicksort(char **arr, int left, int right);

void str_swap(char **str1, char **str2, int *swaps);

/* Strings Pack */
int mx_strlen(char *string);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
int mx_get_char_index(const char *str, char c);
char *mx_strdup(const char *s1);

#endif
