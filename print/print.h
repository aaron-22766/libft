/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:03:01 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 12:42:29 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../libft.h"
# include "./ft_printf_family/ft_printf_family.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

/**
 * @brief Outputs the character ’c’ to the given file descriptor ’fd’.
 * 
 * @param c Character to write
 * @param fd File descriptor to write to
 * @retval ✔︎ Number of bytes written
 * @retval ✘ -1, if write fails
 */
ssize_t	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor ’fd’.
 * 
 * @param s String to write
 * @param fd File descriptor to write to
 * @retval ✔︎ Number of bytes written
 * @retval ✘ -1, if write fails or ’s’ is NULL
 */
ssize_t	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor ’fd’
 * followed by a newline.
 * 
 * @param s String to write
 * @param fd File descriptor to write to
 * @retval ✔︎ Number of bytes written
 * @retval ✘ -1, if write fails or ’s’ is NULL
 */
ssize_t	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor ’fd’.
 * 
 * @param n Integer to write
 * @param fd File descriptor to write to
 * @retval ✔︎ Number of bytes written
 * @retval ✘ -1, if write fails
 */
ssize_t	ft_putnbr_fd(int n, int fd);

/**
 * @brief Prints the strnum ’strnum’ with thousands separator ","
 * 
 * @param strnum The strnum to print
 */
void	ft_print_strnum(char *strnum);

#endif
