/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_realloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:46:33 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/20 09:43:33 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_strlcat_realloc(char **dst, const char *src, size_t dstsize)
{
	char	*new;

	if (*dst && ft_strlcat(*dst, src, dstsize) < dstsize)
		return (dstsize);
	dstsize = ft_strlen(src) + 1;
	if (*dst)
		dstsize += ft_strlen(*dst);
	new = ft_calloc(dstsize, sizeof(char));
	if (!new)
		return (free(*dst), 0);
	if (*dst)
		ft_strlcpy(new, *dst, dstsize);
	ft_strlcat(new, src, dstsize);
	free(*dst);
	*dst = new;
	return (dstsize);
}
