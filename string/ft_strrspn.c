/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:43:17 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 18:08:33 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_strrspn(const char *s, const char *charset)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (i > 0 && ft_strchr(charset, s[i]))
		i--;
	if (!i && ft_strchr(charset, s[i]))
		return (ft_strlen(s));
	return (i);
}
