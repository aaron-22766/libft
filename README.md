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
Every strnum can be signed with '+','-' at index 0 or nothing for positive
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

ft_bzero
ft_calloc
ft_count_2d_array
ft_free_2d_array
ft_memchr
ft_memcmp
ft_memcpy
ft_memmove
ft_memset
ft_replace_ptr
ft_swap_pointers

### print

ft_putchar_fd
ft_putendl_fd
ft_putnbr_fd
ft_putstr_fd
ft_print_strnum

### printf

ft_asprintf
ft_dprintf
ft_eprintf
ft_printf
ft_vasprintf
ft_vdprintf

### string

ft_count_chars
ft_revstr
ft_split
ft_str_insert
ft_str_tolower
ft_str_toupper
ft_strchr
ft_strchr_index
ft_strcmp
ft_strcpy
ft_strcspn
ft_strdup
ft_strends
ft_striteri
ft_strjoin
ft_strlcat
ft_strlcat_realloc
ft_strlcpy
ft_strlen
ft_strmapi
ft_strmerge
ft_strncmp
ft_strncpy
ft_strnstr
ft_strplen
ft_strrchr
ft_strrchr_index
ft_strrcspn
ft_strrspn
ft_strspn
ft_strtrim
ft_substr
