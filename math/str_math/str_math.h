/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_math.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:38:32 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/20 08:50:33 by arabenst         ###   ########.fr       */
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

/**
 * @brief Finds the absolute value of the decimal strnum ’n’.
 * Does not allocate new memory.
 * 
 * @param n String containing a decimal number
 * @retval ✔︎ Pointer to the absolute value of ’n’
 * @retval ✘ NULL, if ’n’ is an invalid decimal
 */
char	*ft_strnum_abs(char *n);

/**
 * @brief Adds the two decimal strnums ’addend_a’ and ’addend_b’.
 * 
 * @param addend_a String containing a decimal number
 * @param addend_b String containing a decimal number
 * @retval ✔︎ Allocated strnum of the sum
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL or invalid decimals
 */
char	*ft_strnum_add(char *addend_a, char *addend_b);

/**
 * @brief Subtracts the decimal strnum ’subtrahend’ from ’minuend’.
 * 
 * @param minuend String containing a decimal number
 * @param subtrahend String containing a decimal number
 * @retval ✔︎ Allocated strnum of the difference
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL or invalid decimals
 */
char	*ft_strnum_subtract(char *minuend, char *subtrahend);

/**
 * @brief Multiplies the two decimal strnums ’multiplier’ and ’multiplicand’.
 * 
 * @param multiplier String containing a decimal number
 * @param multiplicand String containing a decimal number
 * @retval ✔︎ Allocated strnum of the product
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL or invalid decimals
 */
char	*ft_strnum_multiply(char *multiplier, char *multiplicand);

/**
 * @brief Divides the decimal strnum ’dividend’ by ’divisor’.
 * 
 * @param dividend String containing a decimal number
 * @param divisor String containing a decimal number
 * @retval ✔︎ Allocated strnum of the quotient
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL or invalid decimals, or ’divisor’ is zero
 */
char	*ft_strnum_divide(char *dividend, char *divisor);

/**
 * @brief Calculates the power of the two decimal strnums ’base’ and ’exponent’.
 * 
 * @param base String containing a decimal number
 * @param exponent String containing a decimal number
 * @retval ✔︎ Allocated strnum of the power
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL or invalid decimals
 */
char	*ft_strnum_pow(char *base, char *exponent);

/**
 * @brief Calculates the remainder when dividing the decimal strnum ’dividend’
 * by ’divisor’.
 * 
 * @param dividend String containing a decimal number
 * @param divisor String containing a decimal number
 * @retval ✔︎ Allocated strnum of the remainder
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL or invalid decimals, or ’divisor’ is zero
 */
char	*ft_strnum_modulo(char *dividend, char *divisor);

/**
 * @brief Checks if ’n’ is invalid in ’base’.
 * 
 * @param n String containing a number to check
 * @param base Base to check in
 * @retval ✔︎ false, if ’n’ is valid in ’base
 * @retval ✘ true, if any of the strings are NULL or ’n’ is invalid in ’base’
 */
bool	ft_strnum_invalid(char *n, char *base);

/**
 * @brief Checks if ’n’ is a zero number according to ’base’.
 * 
 * @param n String containing a number to check
 * @param base Base to check in
 * @retval ✔︎ true, ’n’ is zero
 * @retval ✘ false, if ’n’ is not zero, or either any of the strings are NULL
 */
bool	ft_strnum_is_zero(char *n, char *base);

/**
 * @brief Compares the strnums ’n1’ and ’n2’ according to ’base’.
 * 
 * @param n1 String containing a number
 * @param n2 String containing a number
 * @param base Base in which the two strnums should be compared in
 * @return 1, 0, or -1,
 * according as ’n1’ is greater than, equal to, or less than ’n2’
 * @warning Undefined behavior if ’n1’ and ’n2’ are invalid in ’base’
 * or any of the strings are NULL
 */
int		ft_strnumcmp(char *n1, char *n2, char *base);

/**
 * @brief Finds the absolute value of the strnum ’n’ in base ’base’.
 * Does not allocate new memory.
 * 
 * @param n String containing a number in ’base’
 * @param base Base of ’n’
 * @retval ✔︎ Pointer to the absolute value of ’n’
 * @retval ✘ NULL, if ’n’ is an invalid in ’base’
 */
char	*ft_strnum_abs_in_base(char *n, char *base);

/**
 * @brief Adds the two strnums ’addend_a’ and ’addend_b’ in base ’base’.
 * 
 * @param addend_a String containing a number in base ’base’
 * @param addend_b String containing a number in base ’base’
 * @param base Base of the strnums
 * @retval ✔︎ Allocated strnum of the sum
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL,
 * or ’addend_a’ or ’addend_b’ are invalid in ’base’
 */
char	*ft_strnum_add_in_base(char *addend_a, char *addend_b, char *base);

/**
 * @brief Subtracts the strnum ’subtrahend’ from ’minuend’ in base ’base’.
 * 
 * @param minuend String containing a number in base ’base’
 * @param subtrahend String containing a number in base ’base’
 * @param base Base of the strnums
 * @retval ✔︎ Allocated strnum of the difference
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL,
 * or ’minuend’ or ’subtrahend’ are invalid in ’base’
 */
char	*ft_strnum_subtract_in_base(char *minuend, char *subtrahend,
			char *base);

/**
 * @brief Multiplies the two strnums ’multiplier’ and ’multiplicand’
 * in base ’base’.
 * 
 * @param multiplier String containing a number in base ’base’
 * @param multiplicand String containing a number in base ’base’
 * @param base Base of the strnums
 * @retval ✔︎ Allocated strnum of the product
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL,
 * or ’multiplier’ or ’multiplicand’ are invalid in ’base’
 */
char	*ft_strnum_multiply_in_base(char *multiplier,
			char *multiplicand, char *base);

/**
 * @brief Divides the strnum ’dividend’ by ’dividend’ in base ’base’.
 * 
 * @param minuend String containing a number in base ’base’
 * @param subtrahend String containing a number in base ’base’
 * @param base Base of the strnums
 * @retval ✔︎ Allocated strnum of the quotient
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL,
 * or ’dividend’ or ’dividend’ are invalid in ’base’,
 * or ’divisor’ is zero.
 */
char	*ft_strnum_divide_in_base(char *dividend, char *divisor, char *base);

/**
 * @brief Calculates the power of the two strnums ’pow_base’ and ’exponent’
 * in base ’base’.
 * 
 * @param pow_base String containing a number in base ’base’
 * @param exponent String containing a number in base ’base’
 * @param base Base of the strnums
 * @retval ✔︎ Allocated strnum of the power
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL,
 * or ’pow_base’ or ’exponent’ are invalid in ’base’
 */
char	*ft_strnum_pow_in_base(char *pow_base, char *exponent, char *base);

/**
 * @brief Calculates the remainder when dividing the strnum ’dividend’ by
 * ’divisor’ in base ’base’.
 * 
 * @param dividend String containing a number in base ’base’
 * @param divisor String containing a number in base ’base’
 * @param base Base of the strnums
 * @retval ✔︎ Allocated strnum of the remainder
 * @retval ✘ NULL, if memory allocation failed,
 * any of the strings are NULL,
 * or ’dividend’ or ’divisor’ are invalid in ’base’
 * or ’divisor’ is zero.
 */
char	*ft_strnum_modulo_in_base(char *dividend, char *divisor, char *base);

#endif
