/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:27:31 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/03 11:59:39 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + i);
	while (--i >= 0)
		if (s[i] == (char)c)
			return ((char *)s + i);
	return (NULL);
}
