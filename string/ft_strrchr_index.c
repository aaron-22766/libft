/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:48:29 by arabenst          #+#    #+#             */
/*   Updated: 2023/05/29 10:48:07 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

ssize_t	ft_strrchr_index(const char *s, int c)
{
	ssize_t	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return (i);
	while (--i >= 0)
		if (s[i] == (char)c)
			return (i);
	return (-1);
}
