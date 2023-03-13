/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:56:42 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/13 12:59:12 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_H
# define IS_H

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../libft.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

// RETURN
// 1: if ’c’ is an uppercase character
// 0: otherwise
int		ft_isupper(int c);

// RETURN
// 1: if ’c’ is a lowercase character
// 0: otherwise
int		ft_islower(int c);

// RETURN
// 1: if ’c’ is an alphabetic character
// 0: otherwise
int		ft_isalpha(int c);

// RETURN
// 1: if ’c’ is a digit
// 0: otherwise
int		ft_isdigit(int c);

// RETURN
// 1: if ’c’ is an alphabetic character or a digit
// 0: otherwise
int		ft_isalnum(int c);

// RETURN
// 1: if ’c’ is a printable character
// 0: otherwise
int		ft_isprint(int c);

// RETURN
// 1: if ’c’ is an ascii character
// 0: otherwise
int		ft_isascii(int c);

// RETURN
// 1: if ’c’ is a whitespace character
// 0: otherwise
int		ft_iswhitespace(int c);

#endif
