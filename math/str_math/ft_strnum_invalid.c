/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnum_invalid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:23:34 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/08 12:03:47 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

bool	ft_strnum_invalid(char *n, char *base)
{
	int	i;

	if (!n || !base)
		return (true);
	i = 0;
	if (n[i] == '+' || n[i] == '-')
		i++;
	while (n[i])
		if (!ft_strchr(base, n[i++]))
			return (true);
	return (false);
}
