/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:29:04 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/20 13:52:50 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

static char	*ft_convert(char *decimal, char *to_base, char *base_len)
{
	char	*result;
	char	*mod;
	char	*digit;
	size_t	result_size;

	if (ft_strnum_is_zero(decimal, "0123456789"))
		return (ft_substr(to_base, 0, 1));
	result_size = 0;
	result = NULL;
	while (!ft_strnum_is_zero(decimal, "0123456789") && decimal)
	{
		mod = ft_str_modulo(decimal, base_len);
		if (!mod)
			return (free(result), NULL);
		digit = ft_substr(to_base, ft_atoi(mod), 1);
		free(mod);
		if (!digit)
			return (free(result), NULL);
		result_size = ft_strlcat_realloc(&result, digit, result_size);
		free(digit);
		ft_replace_ptr((void **)&decimal, ft_str_divide(decimal, base_len));
	}
	return (free(decimal), result);
}

char	*ft_decimal_to_base(char *decimal, char *to_base)
{
	char	*result;
	char	*base_len;
	char	sign_n;

	if (!decimal || !to_base || ft_strnum_invalid(decimal, "0123456789"))
		return (NULL);
	sign_n = '+' * (decimal[0] != '-') + '-' * (decimal[0] == '-');
	decimal = ft_strdup(ft_str_abs_in_base(decimal, "0123456789"));
	base_len = ft_itoa(ft_strlen(to_base));
	if (!decimal || !base_len)
		return (free(decimal), free(base_len), NULL);
	result = ft_convert(decimal, to_base, base_len);
	free(base_len);
	if (!result)
		return (NULL);
	if (sign_n == '+')
		return (ft_revstr(result));
	ft_strlcat_realloc(&result, "-", ft_strlen(result) + 1);
	return (ft_revstr(result));
}
