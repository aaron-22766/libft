/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_realloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:46:33 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/20 11:34:35 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_strlcat_realloc(char **dst, const char *src, size_t dstsize)
{
	char	*new;
	size_t	newsize;

	newsize = ft_strlen(src) + 1;
	if (*dst)
		newsize += ft_strlen(*dst);
	if (*dst && newsize < dstsize)
		return (ft_strlcat(*dst, src, dstsize), dstsize);
	new = ft_calloc(newsize, sizeof(char));
	if (!new)
		return (free(*dst), 0);
	if (*dst)
		ft_strlcpy(new, *dst, newsize);
	ft_strlcat(new, src, newsize);
	free(*dst);
	*dst = new;
	return (newsize);
}
