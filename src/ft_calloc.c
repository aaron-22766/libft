/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 08:27:20 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 14:56:09 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCTIPTION
// Allocates space for ’count’ objects that are ’size’ bytes of memory.
// The allocated memory is filled with bytes of value zero.
// RETURN
// Success: Pointer to the allocated memory.
// Fail: NULL, if ’size’ = 0, ’size’ * ’count’ overflows, allocation fails.
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && (size * count) / size != count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
