/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:51:27 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/20 08:17:22 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../libft.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter.
 * 
 * @param c Character to convert
 * @return The corresponding upper-case letter, if the argument is a lower-case
 * letter. Otherwise, the argument is returned unchanged. 
 */
int			ft_toupper(int c);

/**
 * @brief Converts a upper-case letter to the corresponding lower-case letter.
 * 
 * @param c Character to convert
 * @return The corresponding lower-case letter, if the argument is a upper-case
 * letter. Otherwise, the argument is returned unchanged. 
 */
int			ft_tolower(int c);

/**
 * @brief Converts any lower-case letters in ’str’ to their upper-case
 * equivalent.
 * 
 * @param str String to make upper-case
 * @warning Bus error, if ’str’ is not heap allocated
 */
void		ft_atoupper(char *str);

/**
 * @brief Converts any upper-case letters in ’str’ to their lower-case
 * equivalent.
 * 
 * @param str String to make upper-case
 * @warning Bus error, if ’str’ is not heap allocated
 */
void		ft_atolower(char *str);

/**
 * @brief Converts the initial portion of ’str’ to int representation,
 * ignoring whitespaces in the beginning,
 * taking either ’+’ or ’-’ in front of the first digit
 * and any non-digit character after the first digit marks the end of the number
 * 
 * @param str String to convert
 * @retval ✔︎ Converted number
 * @retval ✘ 0, if an invalid character is in front of the first digit
 * or the created number is smaller than INT_MIN
 * @retval ✘ -1, if the created number is bigger than INT_MAX
 * @warning Segfaults, if ’str’ is NULL
 */
int			ft_atoi(const char *str);

/**
 * @brief Converts the initial portion of ’str’ to long long representation,
 * ignoring whitespaces in the beginning,
 * taking either ’+’ or ’-’ in front of the first digit
 * and any non-digit character after the first digit marks the end of the number
 * 
 * @param str String to convert
 * @retval ✔︎ Converted number
 * @retval ✘ 0, if an invalid character is in front of the first digit
 * or the created number is smaller than LLONG_MIN
 * @retval ✘ -1, if the created number is bigger than LLONG_MAX
 * @warning Undefined behavior, if ’str’ is NULL
 */
long long	ft_atoll(const char *str);

/**
 * @brief Converts the integer ’n’ to string representation.
 * 
 * @param n Integer to convert
 * @retval ✔︎ Allocated string
 * @retval ✘ NULL, if memory allocation fails
 */
char		*ft_itoa(int n);

/**
 * @brief Converts the unsigned integer ’n’ to string representation.
 * 
 * @param n Unsigned integer to convert
 * @retval ✔︎ Allocated string
 * @retval ✘ NULL, if memory allocation fails
 */
char		*ft_uitoa(unsigned int n);

/**
 * @brief Converts the unsigned long ’n’ to string representation in hexadecimal.
 * 
 * @param n Unsigned long to convert
 * @param lowercase If true, the hex number will be written in lower-case
 * letters, otherwise in upper-case
 * @retval ✔︎ Allocated string
 * @retval ✘ NULL, if memory allocation fails
 */
char		*ft_ultoa_hex(unsigned long n, bool lowercase);

/**
 * @brief Converts the string ’n’ to decimal.
 * 
 * @param n String containing a number of base ’from_base’
 * @param from_base Base of ’n’
 * @retval ✔︎ Allocated string
 * @retval ✘ NULL, if memory allocation fails, ’n’ is invalid in ’from_base’ 
 * or any of the stings are NULL.
 */
char		*ft_base_to_decimal(char *n, char *from_base);

/**
 * @brief Converts the string ’n’ to a decimal integer.
 * 
 * @param n String containing a number of base ’from_base’
 * @param from_base Base of ’n’
 * @retval ✔︎ Decimal integer
 * @retval ✘ NULL, if memory allocation fails, ’n’ is invalid in ’from_base’ 
 * or any of the stings are NULL.
 */
int			ft_base_to_int(char *n, char *from_base);

/**
 * @brief Converts the string ’decimal’ to the custom base ’to_base’.
 * 
 * @param decimal String containing an decimal number
 * @param to_base Base in which to convert to
 * @retval ✔︎ Allocated string
 * @retval ✘ NULL, if memory allocation fails, ’n’ is an invalid decimal 
 * or any of the stings are NULL.
 */
char		*ft_decimal_to_base(char *decimal, char *to_base);

/**
 * @brief Converts the string ’n’ from custom ’from_base’ to custom ’to_base’.
 * 
 * @param n String containing a number of base ’from_base’
 * @param from_base Base of ’n’
 * @param to_base Base in which to convert to
 * @retval ✔︎ Allocated string
 * @retval ✘ NULL, if memory allocation fails, ’n’ is invalid in ’from_base’ 
 * or any of the stings are NULL.
 */
char		*ft_convert_base_custom(char *n, char *from_base, char *to_base);

/**
 * @brief Converts the string ’n’ from ’from_base’ to ’to_base’.
 * If ’from_base’ < 36, alphabetical characters in ’n’ can have any case.
 * 
 * @param n String containing a number of base ’from_base’
 * @param from_base Base of ’n’
 * @param to_base Base in which to convert to
 * @retval ✔︎ Allocated string
 * @retval ✘ NULL, if memory allocation fails, ’n’ is NULL or invalid in
 * ’from_base’ or bases are not in range 2 - 62
 */
char		*ft_convert_base(char *n, int from_base, int to_base);

#endif
