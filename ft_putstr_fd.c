/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:28:29 by arabenst          #+#    #+#             */
/*   Updated: 2022/11/23 13:48:27 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putstr_fd(char *s, int fd)
{
	ssize_t	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (ft_putchar_fd(s[i], fd) == -1)
			return (-1);
		i++;
	}
	return (i);
}
