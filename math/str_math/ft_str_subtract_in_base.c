/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_subtract_in_base.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:44:42 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/06 11:57:53 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

static char	*ft_subtact(char *minuend, char *subtrahend, char *base, size_t i)
{
	// char	*difference;
	// int		carry;
	// size_t	back_m;
	// size_t	back_s;
	// size_t	base_len;

	// back_m = ft_strlen(minuend) - 1;
	// difference = ft_calloc(back_m + 3, sizeof(char));
	// if (!difference)
	// 	return (NULL);
	// back_s = ft_strlen(subtrahend) - 1;
	// base_len = ft_strlen(base);
	// carry = 0;
	// while (++i <= back_m)
	// {
	// 	carry = ft_strchr_index(base, minuend[back_m - i]);
	// 	if (carry < (ft_strchr_index(base, subtrahend[back_s - i])
	// 			* (i <= back_s)))
	// 		carry += base_len * ft_strchr_index(base, minuend[back_m - 1- i]);
	// 	difference[i] = (carry - (ft_strchr_index(base, subtrahend[back_s - i])
	// 				* (i <= back_s))) % base_len;

	// }
	// while (!difference[i] || difference[i] == '0')
	// 	difference[i--] = '\0';
	// return (difference);
}

char	*ft_str_subtract_in_base(char *minuend, char *subtrahend, char *base)
{
	char	*difference;
	char	sign_m;
	char	sign_s;

	if (ft_strnum_invalid(minuend, base) || ft_strnum_invalid(subtrahend, base))
		return (NULL);
	difference = NULL;
	sign_m = 0 + '+' * (minuend[0] == '+') + '-' * (minuend[0] == '-');
	sign_s = 0 + '+' * (subtrahend[0] == '+') + '-' * (subtrahend[0] == '-');
	minuend = ft_substr(minuend, !!sign_m, ft_strlen(minuend) - !!sign_m);
	subtrahend = ft_substr(subtrahend, !!sign_s,
			ft_strlen(subtrahend) - !!sign_s);
	if (sign_m == sign_s || sign_m + sign_s == '+')
	{
		if (ft_strlen(minuend) < ft_strlen(subtrahend))
			ft_swap_pointers((void **)&minuend, (void **)&subtrahend);
		difference = ft_subtract(minuend, subtrahend, base, -1);
	}
	else if (sign_m == '-')
		difference = ft_revstr(ft_str_add_in_base(subtrahend, minuend, base));
	else if (sign_s == '-')
		difference = ft_revstr(ft_str_add_in_base(minuend, subtrahend, base));
	if (difference && !(sign_s == '-' && sign_m != '-'))
		difference[ft_strlen(difference)] = '-';
	return (free(minuend), free(subtrahend), ft_revstr(difference));
}

// int	main(void)
// {
// 	char	*difference;

// 	difference = ft_str_subtract_in_base("+BOOBS", "ASS", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
// 	ft_printf("%s\n", difference);
// 	free(difference);
// }
