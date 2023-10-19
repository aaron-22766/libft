/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnum_pow_in_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:51:59 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 10:05:41 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	*ft_strnum_pow_in_base(char *pow_base, char *exponent, char *base)
{
	char	*power;
	char	*count;
	char	*one;

	if (!pow_base || !exponent || !base || ft_strlen(base) < 2)
		return (NULL);
	if (exponent[0] == '-' || ft_strnum_is_zero(exponent, base))
		return (ft_substr(base, ft_strnum_is_zero(exponent, base), 1));
	power = ft_substr(base, 1, 1);
	count = ft_substr(base, 0, 1);
	one = ft_substr(base, 1, 1);
	if (!power || !count || !one)
		return (free(power), free(count), free(one), NULL);
	while (ft_strnumcmp(count, exponent, base) < 0)
	{
		ft_replace_ptr((void **)&count,
			(void *)ft_strnum_add_in_base(count, one, base));
		ft_replace_ptr((void **)&power,
			(void *)ft_strnum_multiply_in_base(power, pow_base, base));
		if (!power || !count)
			return (free(power), free(count), free(one), NULL);
	}
	return (free(count), free(one), power);
}
