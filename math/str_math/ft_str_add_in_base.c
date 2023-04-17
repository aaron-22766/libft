/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_add_in_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:39:42 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/06 11:40:34 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

static char	*ft_add(char *addend_a, char *addend_b, char *base, size_t i)
{
	char	*sum;
	int		carry;
	size_t	back_a;
	size_t	back_b;
	size_t	base_len;

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
	if (carry > 0)
		sum[i] = base[carry / base_len];
	while (!sum[i] || sum[i] == '0')
		sum[i--] = '\0';
	return (sum);
}

char	*ft_str_add_in_base(char *addend_a, char *addend_b, char *base)
{
	char	*sum;
	char	sign_a;
	char	sign_b;

	if (ft_strnum_invalid(addend_a, base) || ft_strnum_invalid(addend_b, base))
		return (NULL);
	sum = NULL;
	sign_a = 0 + '+' * (addend_a[0] == '+') + '-' * (addend_a[0] == '-');
	sign_b = 0 + '+' * (addend_b[0] == '+') + '-' * (addend_b[0] == '-');
	addend_a = ft_substr(addend_a, !!sign_a, ft_strlen(addend_a) - !!sign_a);
	addend_b = ft_substr(addend_b, !!sign_b, ft_strlen(addend_b) - !!sign_b);
	if (sign_a == sign_b || sign_a + sign_b == '+')
	{
		if (ft_strlen(addend_a) < ft_strlen(addend_b))
			ft_swap_pointers((void **)&addend_a, (void **)&addend_b);
		sum = ft_add(addend_a, addend_b, base, -1);
		if (sum && sign_a == '-')
			sum[ft_strlen(sum)] = '-';
		return (free(addend_a), free(addend_b), ft_revstr(sum));
	}
	if (sign_a == '-')
		sum = ft_str_subtract_in_base(addend_b, addend_a, base);
	else if (sign_b == '-')
		sum = ft_str_subtract_in_base(addend_a, addend_b, base);
	return (free(addend_a), free(addend_b), sum);
}

// int	main(void)
// {
// 	char	*sum;

// 	sum = ft_str_add_in_base("1", "823689", "0123456789");
// 	ft_printf("%s\n", sum);
// 	free(sum);
// }
