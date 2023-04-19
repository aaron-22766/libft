/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:38:25 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/18 13:40:08 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ************************************************************************** */
/*                                  INCLUDES                                  */
/* ************************************************************************** */

# include "../print.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

// ft_printf.c

// DESCRIPTION
// Implementation of printf without the buffer management.
// Supported conversion characters: "cspdiuxX%"
// Supported flags: "-0.# +" (space as well)
// RETURN
// Success: number of printed characters
// Fail: -1, if malloc or write failed
int		ft_printf(const char *format, ...);

// ft_printf_specs.c

void	ft_get_string(va_list *args, char *tag, char **cache);
void	ft_get_pointer(va_list *args, char *tag, char **cache);
void	ft_get_int(va_list *args, char *tag, char **cache);
void	ft_get_uint(va_list *args, char *tag, char **cache);
void	ft_get_hex(va_list *args, char *tag, char **cache, int lowercase);

// ft_printf_specs2.c

int		ft_putc(va_list *args, char *tag, int *prtd);
void	ft_get_percent(char *tag, char **cache);

// ft_printf_utils.c

void	ft_apply_width(char *tag, char **cache);
void	ft_apply_precision(char *tag, char **cache, int nu);
void	ft_apply_zero_padding(char *tag, char **cache);
void	ft_apply_alternate(char *tag, char **cache, unsigned int u);
int		ft_valid_tag(const char *tag);

#endif
