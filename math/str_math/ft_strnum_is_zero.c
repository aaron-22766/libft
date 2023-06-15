/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnum_is_zero.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:53:55 by arabenst          #+#    #+#             */
/*   Updated: 2023/06/15 13:03:34 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	ft_strnum_is_zero(char *n, char *base)
{
	if (!n || !base)
		return (false);
	if (*n == '+' || *n == '-')
		n++;
	while (*n == base[0])
		n++;
	return (!(*n));
}
