/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:02:43 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 10:51:48 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../libft.h"
# include "./str_math/str_math.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

/**
 * @brief Calculates the absolute value of ’n’.
 * 
 * @param n Number
 * @return The absolute value of ’n’ 
 */
int		ft_abs(int n);

/**
 * @brief Calculates the factorial of ’n’
 * 
 * @param n Number
 * @retval ✔︎ The factorial of ’n’
 * @retval ✘ 0, if ’n’ is lower than 0
 */
int		ft_factorial(int n);

/**
 * @brief Calculates the number at ’index’ of the Fibonacci sequence
 * 
 * @param index Index
 * @retval ✔︎ The number at ’index’ of the Fibonacci sequence
 * @retval ✘ -1, if ’index’ is lower than 0
 */
int		ft_fibonacci(int index);

/**
 * @brief Calculates the result of ’base’ to the power of ’exponent’
 * 
 * @param base Number
 * @param exponent Number
 * @retval ✔︎ The result of ’base’ to the power of ’exponent’
 * @retval ✘ 0, if ’exponent’ is lover than 0
 */
int		ft_pow(int base, int exponent);

/**
 * @brief Calculates the square root of ’n’ if the square root is an integer
 * 
 * @param n Number
 * @retval ✔︎ The square root of ’n’ if the square root is an integer
 * @retval ✘ -1, otherwise or if ’n’ is lower than 0
 */
int		ft_sqrt_int(int n);

/**
 * @brief Calculates the square root of ’n’
 * (exact value as int, i.e. ft_sqrt(8) = 2)
 * 
 * @param n Number
 * @retval ✔︎ The square root of ’n’
 * @retval ✘ -1, if ’n’ is lower than 0
 */
int		ft_sqrt(int n);

/**
 * @brief Calculates the logarithm with base 2 of ’n’ as int
 * (exact value rounded down)
 * 
 * @param n Number
 * @retval ✔︎ The logarithm with base 2 of ’n’ as int
 * @retval ✘ -1, if ’n’ lower than 1
 */
int		ft_log2_int(int n);

/**
 * @brief Checks if ’n’ is prime
 * 
 * @param n Number
 * @retval true, if ’n’ is a prime number
 * @retval false, otherwise (also if ’n’is lower than 2)
 */
bool	ft_is_prime(int n);

/**
 * @brief Finds the next prime number after ’n’
 * 
 * @param n Number
 * @returns The next prime number after ’n’
 */
int		ft_find_next_prime(int n);

/**
 * @brief Counts the number of digits of ’n’
 * 
 * @param n Number
 * @return The number of digits of ’n’
 */
int		ft_count_digits(int n);

#endif
