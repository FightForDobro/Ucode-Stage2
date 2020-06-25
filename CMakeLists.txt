cmake_minimum_required(VERSION 3.16.5)
project(RefreshMarathonC C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_CLANG_TIDY )
add_executable(RefreshMarathonC main.c t00/mx_printchar.c t01/mx_print_alphabet.c t02/mx_strlen.c t03/mx_printstr.c t04/mx_printint.c t05/mx_pow.c t06/mx_sqrt.c t07/mx_sort_arr_int.c t08/mx_strcmp.c t09/mx_strcpy.c t12/mx_factorial_iter.c t13/mx_bubble_sort.c t14/mx_binary_search.c t15/mx_strnew.c t16/mx_strdup.c t17/mx_hex_to_nbr.c t18/mx_foreach.c)
