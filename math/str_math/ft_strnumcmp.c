/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnumcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 08:59:00 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/18 10:06:07 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

int	ft_compare_positive(char *n1, char *n2, char *base)
{
	size_t	len1;
	size_t	len2;

	if (*n1 == '+' || *n1 == '-')
		n1++;
	if (*n2 == '+' || *n2 == '-')
		n2++;
	while (*n1 == base[0])
		n1++;
	while (*n2 == base[0])
		n2++;
	len1 = ft_strlen(n1);
	len2 = ft_strlen(n2);
	if (len1 != len2)
		return (len1 - len2);
	while (*n1 && *n1 == *n2)
	{
		n1++;
		n2++;
	}
	if (!*n1)
		return (0);
	return (ft_strchr_index(base, *n1) - ft_strchr_index(base, *n2));
}

int	ft_strnumcmp(char *n1, char *n2, char *base)
{
	int	pos;

	pos = ft_compare_positive(n1, n2, base);
	if (pos > 0)
		return (1 - 2 * (*n1 == '-'));
	if (pos < 0)
		return (-1 + 2 * (*n2 == '-'));
	if (ft_strnum_is_zero(n1, base) && ft_strnum_is_zero(n2, base))
		return (0);
	return (0 - (*n1 == '-') + (*n2 == '-'));
}
