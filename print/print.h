/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:03:01 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/18 14:29:23 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../libft.h"
# include "./ft_printf/ft_printf.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

// DESCRIPTION
// Outputs the character ’c’ to the given file descriptor ’fd’.
// RETURN
// Success: number of bytes written
// Fail: -1, if write fails
ssize_t	ft_putchar_fd(char c, int fd);

// DESCRIPTION
// Outputs the string ’s’ to the given file descriptor ’fd’.
// RETURN
// Success: number of bytes written
// Fail: -1, if ’s’ is NULL or write fails
ssize_t	ft_putstr_fd(char *s, int fd);

// DESCRIPTION
// Outputs the string ’s’ to the given file descriptor ’fd’ 
// followed by a newline.
// RETURN
// Success: number of bytes written
// Fail: -1, if ’s’ is NULL or write fails
ssize_t	ft_putendl_fd(char *s, int fd);

// DESCRIPTION
// Outputs the integer ’n’ to the given file descriptor ’fd’.
// RETURN
// Success: number of bytes written
// Fail: -1, if write fails
ssize_t	ft_putnbr_fd(int n, int fd);

#endif
