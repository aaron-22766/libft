/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:39:54 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 15:41:22 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Copies ’len’ bytes from string ’src’ to string ’dst’. The two strings
// may overlap; the copy is always done in a non-destructive manner.
// RETURN
// Original value of ’dst’.
// NULL, if ’dst’ or ’src’ are NULL.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (src < dst && src + len > dst)
	{
		while (i < len)
		{
			*(char *)(dst + len - i - 1) = *(char *)(src + len - i - 1);
			i++;
		}
		return (dst);
	}
	while (i < len)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
