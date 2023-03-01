/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:55:00 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 08:53:20 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESRIPTION
// Copies ’src’ to ’dst’, taking the full size of the destination buffer
// and guaranteeing NUL-termination if there is room (should be included in
// ’dstsize’). Copies up to ’dstsize’ - 1 characters from the string ’src’ to
// ’dst’, NUL-terminating the result if ’dstsize’ is not 0.
// If the src and dst strings overlap, the behavior is undefined.
// RETURN
// The length of the string it tried to create (length of ’src’).
// If the return value is >= ’dstsize’, the output string has been truncated.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
