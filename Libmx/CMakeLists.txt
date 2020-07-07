cmake_minimum_required(VERSION 3.17)
project(ulib C)

set(CMAKE_C_STANDARD 11)

include_directories(inc)
add_executable(ulibm main.c inc/libmx.h src/utils/mx_printchar.c src/utils/mx_print_unicode.c src/strings/mx_strlen.c
        src/utils/mx_printstr.c src/utils/mx_print_strarr.c src/utils/mx_printint.c src/utils/mx_pow.c
        src/utils/mx_sqrt.c src/utils/mx_nbr_to_hex.c src/utils/mx_hex_to_nbr.c
        src/utils/mx_intlen.c src/utils/mx_get_hex_digits_count.c src/utils/mx_itoa.c src/utils/mx_foreach.c src/utils/mx_binary_search.c src/utils/mx_bubble_sort.c src/utils/mx_quicksort.c src/utils/mx_str_swap.c src/strings/mx_swap_char.c src/strings/mx_str_reverse.c src/strings/mx_strdel.c src/strings/mx_del_strarr.c src/strings/mx_get_char_index.c src/strings/mx_strdup.c src/strings/mx_strndup.c)
