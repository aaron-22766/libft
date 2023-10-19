/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:56:42 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 09:12:34 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../libft.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

/**
 * @brief Checks if ’c’ is an uppercase character
 * 
 * @param c Character to check
 * @retval true, if ’c’ is an uppercase character
 * @retval false, if not
 */
bool	ft_isupper(int c);

/**
 * @brief Checks if ’c’ is an lowercase character
 * 
 * @param c Character to check
 * @retval true, if ’c’ is an lowercase character
 * @retval false, if not
 */
bool	ft_islower(int c);

/**
 * @brief Checks if ’c’ is an alphabetic character
 * 
 * @param c Character to check
 * @retval true, if ’c’ is an alphabetic character
 * @retval false, if not
 */
bool	ft_isalpha(int c);

/**
 * @brief Checks if ’c’ is a digit
 * 
 * @param c Character to check
 * @retval true, if ’c’ is a digit
 * @retval false, if not
 */
bool	ft_isdigit(int c);

/**
 * @brief Checks if ’c’ is an alhabetic character or digit
 * 
 * @param c Character to check
 * @retval true, if ’c’ is an alhabetic character or digit
 * @retval false, if not
 */
bool	ft_isalnum(int c);

/**
 * @brief Checks if ’c’ is a printable character
 * 
 * @param c Character to check
 * @retval true, if ’c’ is a printable character
 * @retval false, if not
 */
bool	ft_isprint(int c);

/**
 * @brief Checks if ’c’ is an ascii character
 * 
 * @param c Character to check
 * @retval true, if ’c’ is an ascii character
 * @retval false, if not
 */
bool	ft_isascii(int c);

/**
 * @brief Checks if ’c’ is a whitespace character
 * (space, \\n, \\t, \\v, \\r, \\f)
 * 
 * @param c Character to check
 * @retval true, if ’c’ is a whitespace character
 * @retval false, if not
 */
bool	ft_isspace(int c);

#endif
