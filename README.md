# Libft

Collection of useful functions and reimlementations of different library's functions.

### check
| Function   | Description                                |
|------------|--------------------------------------------|
| ft_isupper | Checks for an uppercase character          |
| ft_islower | Checks for an lowercase character          |
| ft_isalpha | Checks for an alphabetic character         |
| ft_isdigit | Checks for a digit                         |
| ft_isalnum | Checks for an alhabetic character or digit |
| ft_isprint | Checks for a printable character           |
| ft_isascii | Checks for an ascii character              |
| ft_isspace | Checks for a whitespace character          |

### convert
| Function   | Description                                      |
|------------|--------------------------------------------------|
| ft_isalnum | Checks if ’c’ is an uppercase character          |
| ft_isalpha | Checks if ’c’ is an lowercase character          |
| ft_isascii | Checks if ’c’ is an alphabetic character         |
| ft_isdigit | Checks if ’c’ is a digit                         |
| ft_islower | Checks if ’c’ is an alhabetic character or digit |
| ft_isprint | Checks if ’c’ is a printable character           |
| ft_isspace | Checks if ’c’ is an ascii character              |
| ft_isupper | Checks if ’c’ is a whitespace character          |

### get_next_line
| Function      | Description                         |
|---------------|-------------------------------------|
| get_next_line | Reads a line from a file descriptor |

### math
| Function           | Description                                                                  |
|--------------------|------------------------------------------------------------------------------|
| ft_abs             | Calculates the absolute value of ’n’                                         |
| ft_factorial       | Calculates the factorial of ’n’                                              |
| ft_fibonacci       | Calculates the number at ’index’ of the Fibonacci sequence                   |
| ft_power           | Calculates the result of ’base’ to the power of ’exponent’                   |
| ft_sqrt_int        | Calculates the square root of ’n’ if the square root is an integer           |
| ft_sqrt            | Calculates the square root of                                                |
| ft_log2_int        | Calculates the logarithm with base 2 of ’n’ as int(exact value rounded down) |
| ft_is_prime        | Checks if ’n’ is prime                                                       |
| ft_find_next_prime | Finds the next prime number after ’n’                                        |
| ft_count_digits    | Counts the number of digits of ’n’                                           |

### strnum math (bad performance)
Every strnum can be signed with '+', '-' at index 0 or nothing for positive
| Function                   | Description                                                                              |
|----------------------------|------------------------------------------------------------------------------------------|
| ft_strnum_abs              | Finds the absolute value of the decimal strnum ’n’                                       |
| ft_strnum_add              | Adds the two decimal strnums ’addend_a’ and ’addend_b’                                   |
| ft_strnum_subtract         | Subtracts the decimal strnum ’subtrahend’ from ’minuend’                                 |
| ft_strnum_multiply         | Multiplies the two decimal strnums ’multiplier’ and ’multiplicand’                       |
| ft_strnum_divide           | Divides the decimal strnum ’dividend’ by ’divisor’                                       |
| ft_strnum_pow              | Calculates the power of the two decimal strnums ’base’ and ’exponent’                    |
| ft_strnum_modulo           | Calculates the remainder when dividing the decimal strnum ’dividend’ by ’divisor’        |
| ft_strnum_invalid          | Checks if ’n’ is invalid in ’base’                                                       |
| ft_strnum_is_zero          | Checks if ’n’ is a zero number according to ’base’                                       |
| ft_strnumcmp               | Compares the strnums ’n1’ and ’n2’ according to ’base’                                   |
| ft_strnum_abs_in_base      | Finds the absolute value of the strnum ’n’ in base ’base’                                |
| ft_strnum_add_in_base      | Adds the two strnums ’addend_a’ and ’addend_b’ in base ’base’                            |
| ft_strnum_subtract_in_base | Subtracts the strnum ’subtrahend’ from ’minuend’ in base ’base’                          |
| ft_strnum_multiply_in_base | Multiplies the two strnums ’multiplier’ and ’multiplicand’ in base ’base’                |
| ft_strnum_divide_in_base   | Divides the strnum ’dividend’ by ’dividend’ in base ’base’                               |
| ft_strnum_pow_in_base      | Calculates the power of the two strnums ’pow_base’ and ’exponent’ in base ’base’         |
| ft_strnum_modulo_in_base   | Calculates the remainder when dividing the strnum ’dividend’ by ’divisor’ in base ’base’ |

### memory
| Function          | Description                                                                                     |
|-------------------|-------------------------------------------------------------------------------------------------|
| ft_calloc         | Allocates space for ’count’ elements that are ’size’ bytes of memory, filled with zeroed bytes. |
| ft_memset         | Writes ’len’ bytes of value ’c’ to the array ’b’                                                |
| ft_bzero          | Writes ’n’ zeroed bytes to the string ’s’                                                       |
| ft_memcpy         | Copies ’n’ bytes from memory area ’src’ to memory area ’dst’                                    |
| ft_memmove        | Copies ’len’ bytes from string ’src’ to string ’dst’ (non-destructive manner)                   |
| ft_memchr         | Searches for the first occurence of ’c’ in ’s’ within ’n’ bytes                                 |
| ft_memcmp         | Compares byte string ’s1’ against byte string ’s2’                                              |
| ft_swap_pointers  | Swaps the two pointers pointed to by ’a’ and ’b’                                                |
| ft_replace_ptr    | Assigns the pointer ’new’ to the pointer pointed to by ’orig’ (frees previous memory)           |
| ft_free_2d_array  | Frees the NULL-terminated two-dimensional array                                                 |
| ft_count_2d_array | Counts the elements of the NULL-terminated two-dimensional array.                               |

### print
| Function        | Description                                                                    |
|-----------------|--------------------------------------------------------------------------------|
| ft_putchar_fd   | Outputs the character ’c’ to the given file descriptor ’fd’                    |
| ft_putstr_fd    | Outputs the string ’s’ to the given file descriptor ’fd’                       |
| ft_putendl_fd   | Outputs the string ’s’ to the given file descriptor ’fd’ followed by a newline |
| ft_putnbr_fd    | Outputs the integer ’n’ to the given file descriptor ’fd’                      |
| ft_print_strnum | Prints the strnum ’strnum’ with thousands separator ","                        |

### printf family
Supported conversion characters: "cspdiuxX%".
Supported flags: "-0.# +".
| Function     | Description                                                        |
|--------------|--------------------------------------------------------------------|
| ft_printf    | Writes output to stdout                                            |
| ft_eprintf   | Writes output to stderr                                            |
| ft_dprintf   | Writes output to the file descriptor ’fd’                          |
| ft_vdprintf  | Writes output to the file descriptor ’fd’ (from va_list)           |
| ft_asprintf  | Dynamically allocates a new string and writes to it                |
| ft_vasprintf | Dynamically allocates a new string and writes to it (from va_list) |

### string
| Function           | Description                                                                                                           |
|--------------------|-----------------------------------------------------------------------------------------------------------------------|
| ft_strlen          | Computes the length of the string ’s’. (not protected)                                                                |
| ft_strplen         | Computes the length of the string ’s’. (protected)                                                                    |
| ft_strlcpy         | Copies ’src’ to ’dst’                                                                                                 |
| ft_strlcat         | Concatenates ’src’ to ’dst’                                                                                           |
| ft_strlcat_realloc | Concatenates ’src’ to ’dst’, reallocing sufficient memory if the concatenation is greater than ’dstsize’              |
| ft_strchr          | Locates the first occurrence of the character ’c’ in the string ’s’                                                   |
| ft_strrchr         | Locates the last occurrence of the character ’c’ in the string ’s’                                                    |
| ft_strchr_index    | Locates the first occurrence of the character ’c’ in the string ’s’                                                   |
| ft_strrchr_index   | Locates the last occurrence of the character ’c’ in the string ’s’                                                    |
| ft_strspn          | Locates the index of the first character of ’s’ which is not in ’charset’                                             |
| ft_strcspn         | Locates the index of the first character of ’s’ which also in ’charset’                                               |
| ft_strrspn         | Locates the index of the last character of ’s’ which is not in ’charset’                                              |
| ft_strrcspn        | Locates the index of the last character of ’s’ which also in ’charset’                                                |
| ft_strcmp          | Compares the two strings ’s1’ and ’s2’                                                                                |
| ft_strncmp         | Compares ’n’ characters of the two strings ’s1’ and ’s2’                                                              |
| ft_strcpy          | Copies ’src’ to ’dst’                                                                                                 |
| ft_strncpy         | Copies at most ’len’ characters from ’src’ to ’dst’                                                                   |
| ft_strnstr         | Locates the first occurrence of ’needle’ in ’haystack’, within ’len’ characters                                       |
| ft_strdup          | Allocates a copy of ’s1’                                                                                              |
| ft_substr          | Allocates a sub-string from the string ’s’                                                                            |
| ft_strjoin         | Allocates new string, which is the result of the concatenation of ’s1’ and ’s2’                                       |
| ft_strtrim         | Allocates a copy of ’s1’ with all characters specified in ’set’ removed from the beginning and the end of the string. |
| ft_split           | Splits ’s’ using the character ’c’ as a delimiter                                                                     |
| ft_strmapi         | Applies the function ’f’ to each character of ’s’, returning new string                                               |
| ft_striteri        | Applies the function ’f’ on each character of ’s’                                                                     |
| ft_count_chars     | Counts the number of occurences of ’c’ in ’str’                                                                       |
| ft_strmerge        | Replaces ’dst’ with the concatenation of ’dst’ and ’src’, order depends on ’dstleft’                                  |
| ft_revstr          | Reverses the string ’str’ in place                                                                                    |
| ft_str_insert      | Inserts the string ’insert’ into ’str’, replacing the portion indicated by ’start’ and ’len’                          |
| ft_strends         | Checks if the given base string ends with the specified substring                                                     |
