/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:48:11 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 17:15:18 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_strchr(charset, s[i]))
		i++;
	return (i);
}
