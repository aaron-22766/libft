/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:04:27 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 15:39:09 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Copies ’n’ bytes from memory area ’src’ to memory area ’dst’.
// If ’dst’ and ’src’ overlap, behavior is undefined, in which case
// ft_memmove should be used.
// RETURN
// Original value of ’dst’.
// NULL, if ’dst’ or ’src’ are NULL.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
