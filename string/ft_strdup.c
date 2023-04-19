/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:40:45 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/18 11:14:46 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strdup(const char *str)
{
	char	*dst;

	dst = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, str, ft_strlen(str) + 1);
	return (dst);
}
