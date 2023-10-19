/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnum_subtract_in_base.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:44:42 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 10:05:59 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

static char	ft_get_digit(char *minuend, char *base, int borrow, size_t *num)
{
	size_t	j;

	j = num[1] - num[0];
	if (borrow < 0)
	{
		j--;
		while (j >= 0 && minuend[j] == base[0])
			j--;
		minuend[j] = base[ft_strchr_index(base, minuend[j]) - 1];
		while (++j < num[1] - num[0])
			minuend[j] = base[num[3] - 1];
		borrow += num[3];
	}
	return (base[borrow]);
}

// I know it's ugly code but it was necessary for norminette :(
// num[0] = "i"
// num[1] = "back_m"
// num[2] = "back_s"
// num[3] = "base_len"

static char	*ft_sub(char *minuend, char *subtrahend, char *base)
{
	char	*difference;
	size_t	num[4];

	num[1] = ft_strlen(minuend) - 1;
	difference = ft_calloc(num[1] + 3, sizeof(char));
	minuend = ft_strdup(minuend);
	if (!difference || !minuend)
		return (free(difference), free(minuend), NULL);
	num[2] = ft_strlen(subtrahend) - 1;
	num[3] = ft_strlen(base);
	num[0] = -1;
	while (++num[0] <= num[1])
		difference[num[0]] = ft_get_digit(minuend, base, ft_strchr_index(base,
					minuend[num[1] - num[0]]) - (num[0] <= num[2])
				* ft_strchr_index(base, subtrahend[num[2] - num[0]]), num);
	free(minuend);
	while (!difference[num[0]] || (difference[num[0]] == base[0] && num[0] > 0))
		difference[num[0]--] = '\0';
	return (difference);
}

static char	*ft_subtract(char *minuend, char *subtrahend, char *base)
{
	char	*difference;
	int		cmp;

	cmp = ft_strnumcmp(minuend, subtrahend, base);
	if (cmp > 0)
		return (ft_revstr(ft_sub(minuend, subtrahend, base)));
	if (cmp == 0)
		return (ft_substr(base, 0, 1));
	difference = ft_sub(subtrahend, minuend, base);
	if (difference)
		difference[ft_strlen(difference)] = '-';
	return (ft_revstr(difference));
}

char	*ft_strnum_subtract_in_base(char *minuend, char *subtrahend, char *base)
{
	char	*difference;
	char	sign_a;
	char	sign_b;

	if (!minuend || !subtrahend || !base || ft_strlen(base) < 2)
		return (NULL);
	sign_a = '+' * (minuend[0] != '-') + '-' * (minuend[0] == '-');
	sign_b = '+' * (subtrahend[0] != '-') + '-' * (subtrahend[0] == '-');
	minuend = ft_strnum_abs_in_base(minuend, base);
	subtrahend = ft_strnum_abs_in_base(subtrahend, base);
	if (!minuend || !subtrahend)
		return (NULL);
	if (sign_a == '+' && sign_b == '+')
		return (ft_subtract(minuend, subtrahend, base));
	else if (sign_a == '-' && sign_b == '-')
		return (ft_subtract(subtrahend, minuend, base));
	difference = ft_revstr(ft_strnum_add_in_base(minuend, subtrahend, base));
	if (difference && sign_a == '-' && sign_b == '+')
		difference[ft_strlen(difference)] = '-';
	return (ft_revstr(difference));
}
