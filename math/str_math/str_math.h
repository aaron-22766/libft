/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_math.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:38:32 by arabenst          #+#    #+#             */
/*   Updated: 2023/06/15 13:03:26 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_MATH_H
# define STR_MATH_H

/* ************************************************************************** */
/*                                 IMPORTANT                                  */
/* ************************************************************************** */
/* Every strnum can be signed with '+','-' at index 0 or nothing for positive */

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../math.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

// DESCRIPTION
// Adjusts the pointer ’n’, so that '+' or '-' and all following zero
// values (in decimal) are ignored. Does not allocate new memory!
// RETURN
// Success: Pointer to the absolute value of ’n’.
// Fail: NULL, if ’n’ is an invalid decimal.
char	*ft_str_abs(char *n);

// DESCRIPTION
// Adds the two string numbers ’addend_a’ and ’addend_b’ in decimal.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’addend_a’ or ’addend_b’ are
// NULL or invalid decimals.
char	*ft_str_add(char *addend_a, char *addend_b);

// DESCRIPTION
// Subtracts the string number ’subtrahend’ from ’minuend’ in decimal.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’minuend’ or ’subtrahend’ are
// NULL or invalid decimals.
char	*ft_str_subtract(char *minuend, char *subtrahend);

// DESCRIPTION
// Multiplies the two string numbers ’multiplier’ and ’multiplicand’ in decimal.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’multiplier’ or ’multiplicand’ are
// NULL or invalid decimals.
char	*ft_str_multiply(char *multiplier, char *multiplicand);

// DESCRIPTION
// Divides the string number ’dividend’ by ’divisor’ in decimal.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’dividend’ or ’divisor’ are
// NULL or invalid decimals; ’divisor’ is zero.
char	*ft_str_divide(char *dividend, char *divisor);

// DESCRIPTION
// Calculates the power of the two string numbers ’base’ and ’exponent’
// in decimal.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’base’ or ’exponent’ are
// NULL or invalid decimals.
char	*ft_str_pow(char *base, char *exponent);

// DESCRIPTION
// Calculates the remainder when dividing ’dividend’ by ’divisor’ in decimal.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’dividend’ or ’divisor’
// are NULL or invalid decimals; ’divisor’ is zero.
char	*ft_str_modulo(char *dividend, char *divisor);

// DESCRIPTION
// Checks if ’n’ is invalid in ’base’.
// RETURN
// true, if ’n’ or ’base’ are NULL or ’n’ is invalid in ’base’
// false, if ’n’ is valid in ’base’
char	ft_strnum_invalid(char *n, char *base);

// DESCRIPTION
// Checks if ’n’ is a zero number according to ’base’.
// RETURN
// true, ’n’ is zero
// false, if ’n’ is not zero, or either ’n’ or ’base’ are NULL
char	ft_strnum_is_zero(char *n, char *base);

// DESCRIPTION
// Compares the string numbers ’n1’ and ’n2’ according to ’base’.
// There will be undefined behavior if ’n1’ and ’n2’ are invalid in ’base’.
// RETURN
// 1, 0, or -1, according as ’n1’ is greater than, equal to, or less than ’n2’.
int		ft_strnumcmp(char *n1, char *n2, char *base);

// DESCRIPTION
// Adjusts the pointer ’n’, so that '+' or '-' and all following zero
// values (according to ’base’) are ignored. Does not allocate new memory!
// RETURN
// Success: Pointer to the absolute value of ’n’.
// Fail: NULL, if ’n’ is invalid in ’base’.
char	*ft_str_abs_in_base(char *n, char *base);

// DESCRIPTION
// Adds the two string numbers ’addend_a’ and ’addend_b’ in a base defined
// in ’base’.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’addend_a’, ’addend_b’ or ’base’
// are NULL or ’addend_a’ and ’addend_b’ are invalid in ’base’.
char	*ft_str_add_in_base(char *addend_a, char *addend_b, char *base);

// DESCRIPTION
// Subtracts the string number ’subtrahend’ from ’minuend’ in a base defined
// in ’base’.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’subtrahend’, ’minuend’ or ’base’
// are NULL or ’subtrahend’ and ’minuend’ are invalid in ’base’.
char	*ft_str_subtract_in_base(char *minuend, char *subtrahend, char *base);

// DESCRIPTION
// Multiplies the two string numbers ’multiplier’ and ’multiplicand’ in a base
// defined in ’base’.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’multiplier’, ’multiplicand’ or
// ’base’ are NULL or ’multiplier’ and ’multiplicand’ are invalid in ’base’.
char	*ft_str_multiply_in_base(char *multiplier,
			char *multiplicand, char *base);

// DESCRIPTION
// Divides the string number ’dividend’ by ’divisor’ in a base
// defined in ’base’.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’dividend’, ’divisor’ or ’base’
// are NULL or ’dividend’ and ’divisor’ are invalid in ’base’; ’divisor’ is
// zero.
char	*ft_str_divide_in_base(char *dividend, char *divisor, char *base);

// DESCRIPTION
// Calculates the power of the two string numbers ’base’ and ’exponent’
// in a base defined in ’base’.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’base’, ’exponent’ or ’base’
// are NULL or ’base’ and ’exponent’ are invalid in ’base’.
char	*ft_str_pow_in_base(char *pow_base, char *exponent, char *base);

// DESCRIPTION
// Calculates the remainder when dividing ’dividend’ by ’divisor’ in a base
// defined in ’base’.
// RETURN
// Success: String containing the result.
// Fail: NULL, if memory allocation failed; ’dividend’, ’divisor’ or ’base’
// are NULL or ’dividend’ and ’divisor’ are invalid in ’base’; ’divisor’ is
// zero.
char	*ft_str_modulo_in_base(char *dividend, char *divisor, char *base);

#endif
