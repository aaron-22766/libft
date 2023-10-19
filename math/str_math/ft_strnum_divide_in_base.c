/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnum_divide_in_base.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:40:46 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 12:43:05 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

static char	*ft_div(char *dividend, char *divisor, char *base)
{
	char	*quotient;
	char	*count;
	char	*one;

	quotient = ft_substr(base, 0, 1);
	count = ft_substr(base, 0, 1);
	one = ft_substr(base, 1, 1);
	if (!quotient || !count || !one)
		return (free(quotient), free(count), free(one), NULL);
	while (ft_strnumcmp(count, dividend, base) <= 0)
	{
		ft_replace_ptr((void **)&count,
			(void *)ft_strnum_add_in_base(count, divisor, base));
		ft_replace_ptr((void **)&quotient,
			(void *)ft_strnum_add_in_base(quotient, one, base));
		if (!quotient || !count)
			return (free(quotient), free(count), free(one), NULL);
	}
	ft_replace_ptr((void **)&quotient,
		(void *)ft_strnum_subtract_in_base(quotient, one, base));
	return (free(count), free(one), quotient);
}

static char	*ft_divide(char *dividend, char *divisor, char *base)
{
	int	cmp;

	if (ft_strnum_is_zero(divisor, base))
		return (NULL);
	cmp = ft_strnumcmp(dividend, divisor, base);
	if (cmp < 0)
		return (ft_substr(base, 0, 1));
	if (cmp == 0)
		return (ft_substr(base, 1, 1));
	return (ft_div(dividend, divisor, base));
}

char	*ft_strnum_divide_in_base(char *dividend, char *divisor, char *base)
{
	char	*quotient;
	char	sign_dd;
	char	sign_dv;

	if (!dividend || !divisor || !base || ft_strlen(base) < 2)
		return (NULL);
	sign_dd = '+' * (dividend[0] != '-') + '-' * (dividend[0] == '-');
	sign_dv = '+' * (divisor[0] != '-') + '-' * (divisor[0] == '-');
	dividend = ft_strnum_abs_in_base(dividend, base);
	divisor = ft_strnum_abs_in_base(divisor, base);
	if (!dividend || !divisor)
		return (NULL);
	if (sign_dd == sign_dv)
		return (ft_divide(dividend, divisor, base));
	quotient = ft_revstr(ft_divide(dividend, divisor, base));
	if (quotient && !ft_strnum_is_zero(quotient, base))
		quotient[ft_strlen(quotient)] = '-';
	return (ft_revstr(quotient));
}
