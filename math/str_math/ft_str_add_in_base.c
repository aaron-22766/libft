/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_add_in_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:39:42 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/19 12:13:09 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

static char	*ft_add(char *addend_a, char *addend_b, char *base, size_t i)
{
	char	*sum;
	size_t	carry;
	size_t	back_a;
	size_t	back_b;
	size_t	base_len;

	if (ft_strlen(addend_a) < ft_strlen(addend_b))
		ft_swap_pointers((void **)&addend_a, (void **)&addend_b);
	back_a = ft_strlen(addend_a) - 1;
	sum = ft_calloc(back_a + 4, sizeof(char));
	if (!sum)
		return (NULL);
	back_b = ft_strlen(addend_b) - 1;
	base_len = ft_strlen(base);
	carry = 0;
	while (++i <= back_a)
	{
		carry = carry / base_len + ft_strchr_index(base, addend_a[back_a - i])
			+ (i <= back_b) * ft_strchr_index(base, addend_b[back_b - i]);
		sum[i] = base[carry % base_len];
	}
	sum[i] = (carry > 0) * base[carry / base_len];
	while (!sum[i] || (sum[i] == base[0] && i > 0))
		sum[i--] = '\0';
	return (sum);
}

char	*ft_str_add_in_base(char *addend_a, char *addend_b, char *base)
{
	char	*sum;
	char	sign_a;
	char	sign_b;

	if (!addend_a || !addend_b || !base || ft_strlen(base) < 2)
		return (NULL);
	sign_a = '+' * (addend_a[0] != '-') + '-' * (addend_a[0] == '-');
	sign_b = '+' * (addend_b[0] != '-') + '-' * (addend_b[0] == '-');
	addend_a = ft_str_abs_in_base(addend_a, base);
	addend_b = ft_str_abs_in_base(addend_b, base);
	if (!addend_a || !addend_b)
		return (NULL);
	if (sign_a == '+' && sign_b == '-')
		return (ft_str_subtract_in_base(addend_a, addend_b, base));
	else if (sign_a == '-' && sign_b == '+')
		return (ft_str_subtract_in_base(addend_b, addend_a, base));
	sum = ft_add(addend_a, addend_b, base, -1);
	if (sum && sign_a == '-' && sign_b == '-')
		sum[ft_strlen(sum)] = '-';
	return (ft_revstr(sum));
}
