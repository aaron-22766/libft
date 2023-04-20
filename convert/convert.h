/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:51:27 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/20 11:45:26 by arabenst         ###   ########.fr       */
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

// DESCRIPTION
// Converts a lower-case letter to the corresponding upper-case letter.
// RETURN
// The corresponding upper-case letter if the argument is a lower-case letter.
// Otherwise, the argument is returned unchanged.
int		ft_toupper(int c);

// DESCRIPTION
// Converts an upper-case letter to the corresponding lower-case letter.
// RETURN
// The corresponding lower-case letter if the argument is an upper-case letter.
// Otherwise, the argument is returned unchanged.
int		ft_tolower(int c);

// DESCRIPTION
// Converts any lower-case letters in ’str’ to their upper-case equivalent.
// (Only on the heap allocated strings!)
void	ft_atoupper(char *str);

// DESCRIPTION
// Converts any upper-case letters in ’str’ to their lower-case equivalent.
// (Only on the heap allocated strings!)
void	ft_atolower(char *str);

// DESCTIPTION
// Converts the initial portion of ’str’ to int representation.
// - ignores whitespaces in the beginning
// - takes either ’+’ or ’-’ in front of the number
// - any non-digit character after the first digit marks the end of the number
// RETURN
// Success: Converted number
// Fail: 0, if an invalid character is in front of the first digit
// or the created number is smaller than INT_MIN
// -1 if the created number is bigger than INT_MAX
int		ft_atoi(const char *str);

// DESCTIPTION
// Allocates and returns a string representing the integer ’n’.
// RETURN
// Success: Pointer to the string.
// Fail: NULL, if memory allocation fails.
char	*ft_itoa(int n);

// DESCTIPTION
// Allocates and returns a string representing the unsigned int ’n’.
// RETURN
// Success: Pointer to the string.
// Fail: NULL, if memory allocation fails.
char	*ft_uitoa(unsigned int n);

// DESCTIPTION
// Allocates a string representing the unsigned long ’n’ in hexadecimal (base
// 16) form. The hex number will be written in upper-case letters if
// ’lowercase’ is 0, otherwise in lower-case letters.
// RETURN
// Success: Pointer to the string.
// Fail: NULL, if memory allocation fails.
char	*ft_ultoa_hex(unsigned long n, int lowercase);

// DESCRIPTION
// Converts the string ’n’ from the custom base ’from_base’ to decimal.
// RETURN
// Success: The newly allocated string with the converted number.
// Fail: NULL, if memory allocation fails, if ’n’ is invalid in ’from_base’
// or any of the stings are NULL.
char	*ft_base_to_decimal(char *n, char *from_base);

// DESCRIPTION
// Converts the string ’decimal’ from decimal to the custom base ’to_base’.
// RETURN
// Success: The newly allocated string with the converted number.
// Fail: NULL, if memory allocation fails, if ’n’ is an invalid decimal
// or any of the stings are NULL.
char	*ft_decimal_to_base(char *decimal, char *to_base);

// DESCRIPTION
// Converts the string ’n’ from custom ’from_base’ to custom ’to_base’.
// RETURN
// Success: The newly allocated string with the converted number.
// Fail: NULL, if memory allocation fails, if ’n’ is invalid in ’from_base’
// or any of the stings are NULL.
char	*ft_convert_base_custom(char *n, char *from_base, char *to_base);

// DESCRIPTION
// Converts the string ’n’ from ’from_base’ to ’to_base’.
// If ’from_base’ < 36, alphabetical characters in ’n’ can have any case.
// RETURN
// Success: The newly allocated string with the converted number.
// Fail: NULL, if memory allocation fails, if ’n’ is invalid in ’from_base’
// or any of the stings are NULL.
char	*ft_convert_base(char *n, int from_base, int to_base);

#endif
