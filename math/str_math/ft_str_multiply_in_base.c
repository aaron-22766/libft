/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_multiply_in_base.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:47:03 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/19 10:35:15 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

static char	*ft_multiply(char *multiplier, char *multiplicand, char *base)
{
	char	*product;
	char	*count;
	char	*one;

	if (ft_strnumcmp(multiplier, multiplicand, base) > 0)
		ft_swap_pointers((void **)&multiplier, (void **)&multiplicand);
	product = ft_substr(base, 0, 1);
	count = ft_substr(base, 0, 1);
	one = ft_substr(base, 1, 1);
	if (!product || !count || !one)
		return (free(product), free(count), free(one), NULL);
	while (ft_strnumcmp(count, multiplier, base) < 0)
	{
		ft_replace_ptr((void **)&count,
			(void *)ft_str_add_in_base(count, one, base));
		ft_replace_ptr((void **)&product,
			(void *)ft_str_add_in_base(product, multiplicand, base));
		if (!product || !count)
			return (free(product), free(count), free(one), NULL);
	}
	return (free(count), free(one), product);
}

char	*ft_str_multiply_in_base(char *multiplier,
	char *multiplicand, char *base)
{
	char	*product;
	char	sign_mp;
	char	sign_mpc;

	if (!multiplier || !multiplicand || !base || ft_strlen(base) < 2)
		return (NULL);
	sign_mp = '+' * (multiplier[0] != '-') + '-' * (multiplier[0] == '-');
	sign_mpc = '+' * (multiplicand[0] != '-') + '-' * (multiplicand[0] == '-');
	multiplier = ft_str_abs_in_base(multiplier, base);
	multiplicand = ft_str_abs_in_base(multiplicand, base);
	if (!multiplier || !multiplicand)
		return (NULL);
	if (sign_mp == sign_mpc)
		return (ft_multiply(multiplier, multiplicand, base));
	product = ft_revstr(ft_multiply(multiplier, multiplicand, base));
	if (product)
		product[ft_strlen(product)] = '-';
	return (ft_revstr(product));
}
