/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:50:26 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 09:38:20 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Similar to ft_strjoin, it allocates a new string, which is the result of
// the concatenation of ’dst’ and ’src’. The order of the concatination depends
// on the value of ’dstleft’. If ’dstleft’ is 0, ’dst’ will be appended to
// ’src’, otherwise ’src’ will be appended to ’dst’. It frees ’dst’ if
// necessary and assigns the pointer to the newly created string to ’dst’.
// RETURN
// Success: ’dst’
// Fail: NULL, if ’src’ is NULL or memory allocation failed
char	**ft_strmerge(char **dst, char *src, int dstleft)
{
	char	*joined;
	size_t	i;
	size_t	size;

	if (!src)
		return (NULL);
	size = sizeof(char) * (ft_strlen(*dst) + ft_strlen(src) + 1);
	joined = ft_calloc(size / sizeof(char), sizeof(char));
	if (!joined)
		return (NULL);
	i = 0;
	if (!dstleft)
		i = ft_strlcpy(joined, src, size);
	if (*dst)
	{
		i = ft_strlcpy(joined + i, *dst, size);
		free(*dst);
	}
	if (dstleft)
		i = ft_strlcpy(joined + i, src, size);
	*dst = joined;
	return (dst);
}
