/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:47:24 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/13 13:48:07 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	size = sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1);
	joined = ft_calloc(size / sizeof(char), sizeof(char));
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, s1, size);
	ft_strlcat(joined, s2, size);
	return (joined);
}
