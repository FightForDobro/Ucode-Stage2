cmake_minimum_required(VERSION 3.16)
project(ulib C)

set(CMAKE_C_STANDARD 11)

include_directories(inc)
add_executable(ulibm main.c inc/libmx.h src/utils/mx_printchar.c src/utils/mx_print_unicode.c src/strings/mx_strlen.c
        src/utils/mx_printstr.c src/utils/mx_print_strarr.c src/utils/mx_printint.c src/utils/mx_pow.c
        src/utils/mx_sqrt.c src/utils/mx_nbr_to_hex.c src/utils/mx_hex_to_nbr.c
        src/utils/mx_intlen.c src/utils/mx_get_hex_digits_count.c src/utils/mx_itoa.c src/utils/mx_foreach.c
        src/utils/mx_binary_search.c src/utils/mx_bubble_sort.c src/utils/mx_quicksort.c src/utils/mx_str_swap.c
        src/strings/mx_swap_char.c src/strings/mx_str_reverse.c src/strings/mx_strdel.c src/strings/mx_del_strarr.c
        src/strings/mx_get_char_index.c src/strings/mx_strdup.c src/strings/mx_strndup.c src/strings/mx_strcpy.c src/strings/mx_strncpy.c
        src/strings/mx_strcat.c src/strings/mx_strstr.c src/strings/mx_strncmp.c src/strings/mx_get_substr_index.c src/strings/mx_count_substr.c
        src/strings/mx_count_words.c src/strings/mx_delete_trailing_char.c src/strings/mx_strnew.c src/strings/mx_strtrim.c src/utils/mx_is_whitespace.c
        src/strings/mx_del_extra_spaces.c src/strings/mx_strsplit.c src/strings/mx_strjoin.c src/strings/mx_file_to_str.c src/strings/mx_read_line.c
        src/strings/mx_strncat.c src/memory/mx_memset.c src/memory/mx_memcpy.c src/memory/mx_memccpy.c src/memory/mx_memcmp.c src/memory/mx_memchr.c src/memory/mx_memrchr.c src/memory/mx_memmove.c src/memory/mx_memmem.c)
