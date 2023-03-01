/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:15:55 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 16:02:17 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Outputs the character ’c’ to the given file descriptor ’fd’.
// RETURN
// Success: number of bytes written
// Fail: -1, if write fails
ssize_t	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
