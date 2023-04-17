/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_decimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:29:50 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/03 12:10:33 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

static char	*ft_str_add_free(char *a, char *b)
{
	char	*sum;

	sum = ft_str_add(a, b);
	free(a);
	free(b);
	return (sum);
}

char	*ft_base_to_decimal(char *n, char *from_base)
{
	char	*decimal;
	char	*base;
	char	*exponent;
	char	*pow;
	int		i;

	if (!n || !from_base)
		return (NULL);
	decimal = ft_strdup("0");
	i = ft_strlen(n);
	while (--i >= 0)
	{
		if (ft_strchr_index(from_base, n[i]) == -1)
			return (free(decimal), NULL);
		base = ft_itoa(ft_strchr_index(from_base, n[i]));
		if (!base)
			return (free(decimal), NULL);
		exponent = ft_itoa(ft_strlen(n) - i);
		pow = ft_str_pow(base, exponent);
		free(base);
		free(exponent);
		decimal = ft_str_add_free(decimal, pow);
	}
	return (decimal);
}
