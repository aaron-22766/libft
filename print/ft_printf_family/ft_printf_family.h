/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_family.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:54:41 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 12:36:33 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FAMILY_H
# define FT_PRINTF_FAMILY_H

/* ************************************************************************** */
/*                                  INCLUDES                                  */
/* ************************************************************************** */

# include "../print.h"
# include "pf_helpers/pf_helpers.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

/**
 * @brief Writes output to stdout.
 * Supported conversion characters: "cspdiuxX%".
 * Supported flags: "-0.# +".
 * 
 * @param format Format string to print
 * @param ... Variable amount of arguments to print
 * @retval ✔︎ Number of printed characters
 * @retval ✘ -1, if malloc or write failed
 */
int	ft_printf(const char *format, ...);

/**
 * @brief Writes output to stderr.
 * Supported conversion characters: "cspdiuxX%".
 * Supported flags: "-0.# +".
 * 
 * @param format Format string to print
 * @param ... Variable amount of arguments to print
 * @retval ✔︎ Number of printed characters
 * @retval ✘ -1, if malloc or write failed
 */
int	ft_eprintf(const char *format, ...);

/**
 * @brief Writes output to the file descriptor ’fd’.
 * Supported conversion characters: "cspdiuxX%".
 * Supported flags: "-0.# +".
 * 
 * @param fd File descriptor to write to
 * @param format Format string to print
 * @param ... Variable amount of arguments to print
 * @retval ✔︎ Number of printed characters
 * @retval ✘ -1, if malloc or write failed
 */
int	ft_dprintf(int fd, const char *format, ...);

/**
 * @brief Writes output to the file descriptor ’fd’.
 * Supported conversion characters: "cspdiuxX%".
 * Supported flags: "-0.# +".
 * 
 * @param fd File descriptor to write to
 * @param format Format string to print
 * @param ap Variable amount of arguments to print
 * @retval ✔︎ Number of printed characters
 * @retval ✘ -1, if malloc or write failed
 */
int	ft_vdprintf(int fd, const char *format, va_list	ap);

/**
 * @brief Dynamically allocates a new string and writes to it.
 * Supported conversion characters: "cspdiuxX%".
 * Supported flags: "-0.# +".
 * 
 * @param ret Address of the string to write to
 * @param format Format string to print
 * @param ... Variable amount of arguments to print
 * @retval ✔︎ Number of written characters
 * @retval ✘ -1, if malloc
 */
int	ft_asprintf(char **ret, const char *format, ...);

/**
 * @brief Dynamically allocates a new string and writes to it.
 * Supported conversion characters: "cspdiuxX%".
 * Supported flags: "-0.# +".
 * 
 * @param ret Address of the string to write to
 * @param format Format string to print
 * @param ap Variable amount of arguments to print
 * @retval ✔︎ Number of written characters
 * @retval ✘ -1, if malloc
 */
int	ft_vasprintf(char **ret, const char *format, va_list ap);

#endif
