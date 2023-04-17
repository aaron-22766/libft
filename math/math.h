/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:02:43 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/01 14:58:21 by arabenst         ###   ########.fr       */
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

// RETURN
// The absolute value of ’n’
int		ft_abs(int n);

// RETURN
// The factorial of ’n’
// 0, if ’n’ is lower than 0
int		ft_factorial(int n);

// RETURN
// The number at ’index’ of the Fibonacci sequence
// -1, if ’index’ is lower than 0
int		ft_fibonacci(int index);

// RETURN
// The result of ’base’ to the power of ’exponent’
// 0, if ’exponent’ is lover than 0
int		ft_pow(int base, int exponent);

// RETURN
// The square root of ’n’ if the square root is an integer
// -1, otherwise or if ’n’ is lower than 0
int		ft_sqrt_int(int n);

// RETURN
// The square root of ’n’ (exact value as int, i.e. ft_sqrt(8) = 2)
// -1, if ’n’ is lower than 0
int		ft_sqrt(int n);

// RETURN
// The logarithm with base 2 of ’n’ as int (exact value rounded down)
// -1, if ’n’ lower than 1
int		ft_log2_int(int n);

// RETURN
// 1, if ’n’ is a prime number
// 0, if ’n’ is not a prime or if ’n’ is lower than 2
int		ft_is_prime(int n);

// RETURN
// The next prime number after ’n’
int		ft_find_next_prime(int n);

// RETURN
// The number of digits of ’n’
int		ft_count_digits(int n);

#endif
