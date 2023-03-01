/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:26:22 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 08:51:17 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESRIPTION
// Concatenates ’src’ to ’dst’, taking the full size of the destination buffer
// and guaranteeing NUL-termination if there is room (should be included in
// ’dstsize’). It will append at most dstsize - strlen(dst) - 1 characters.
// It will then NUL-terminate, unless dstsize is 0 or the original dst string
// was longer than dstsize (in practice this should not happen as it means that
// either dstsize is incorrect or that dst is not a proper string).
// If the src and dst strings overlap, the behavior is undefined.
// RETURN
// The length of the string it tried to create (length ’dst’ + ’src’).
// If the return value is >= ’dstsize’, the output string has been truncated.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	if (!dstsize)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen >= dstsize)
		return (dstsize + slen);
	i = 0;
	while (src[i] && dlen + i + 1 < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
