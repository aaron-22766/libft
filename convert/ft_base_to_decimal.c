/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_decimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:29:50 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 12:37:40 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

static char	*ft_convert(char *n, char *from_base, char *decimal, char *base_len)
{
	char	*temp;
	char	*pow;
	char	*product;
	size_t	n_len;
	size_t	i;

	n_len = ft_strlen(n);
	i = -1;
	while (++i < n_len && decimal)
	{
		temp = ft_itoa(i);
		pow = ft_strnum_pow(base_len, temp);
		free(temp);
		temp = ft_itoa(ft_strchr_index(from_base, n[n_len - 1 - i]));
		product = ft_strnum_multiply(temp, pow);
		free(pow);
		free(temp);
		ft_replace_ptr((void **)&decimal,
			(void *)ft_strnum_add(decimal, product));
		free(product);
	}
	return (decimal);
}

char	*ft_base_to_decimal(char *n, char *from_base)
{
	char	*decimal;
	char	*base_len;
	char	sign_n;

	if (!n || !from_base || ft_strnum_invalid(n, from_base))
		return (NULL);
	decimal = ft_strdup("0");
	base_len = ft_itoa(ft_strlen(from_base));
	if (!decimal || !base_len)
		return (free(decimal), free(base_len), NULL);
	sign_n = '+' * (n[0] != '-') + '-' * (n[0] == '-');
	n = ft_strnum_abs_in_base(n, from_base);
	decimal = ft_convert(n, from_base, decimal, base_len);
	if (sign_n == '+')
		return (free(base_len), decimal);
	if (ft_revstr(decimal))
		decimal[ft_strlen(decimal)] = '-';
	return (free(base_len), ft_revstr(decimal));
}
