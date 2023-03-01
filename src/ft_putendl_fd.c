/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:33:09 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 16:07:21 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Outputs the string ’s’ to the given file descriptor ’fd’ 
// followed by a newline.
// RETURN
// Success: number of bytes written
// Fail: -1, if ’s’ is NULL or write fails
ssize_t	ft_putendl_fd(char *s, int fd)
{
	char	nl;
	ssize_t	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (write(fd, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	nl = '\n';
	if (write(fd, &nl, 1) == -1)
		return (-1);
	return (++i);
}
