/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:28:29 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 16:22:37 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Outputs the string ’s’ to the given file descriptor ’fd’.
// RETURN
// Success: number of bytes written
// Fail: -1, if ’s’ is NULL or write fails
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
