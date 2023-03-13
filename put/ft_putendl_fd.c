/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:33:09 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/13 13:58:42 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

ssize_t	ft_putendl_fd(char *s, int fd)
{
	ssize_t	i;

	i = ft_putstr_fd(s, fd);
	if (i == -1)
		return (-1);
	if (ft_putchar_fd('\n', fd) == -1)
		return (-1);
	return (i + 1);
}
