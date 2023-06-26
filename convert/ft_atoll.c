/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:02:09 by arabenst          #+#    #+#             */
/*   Updated: 2023/06/26 08:43:01 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

long long	ft_atoll(const char *str)
{
	long long	result;
	size_t		i;
	char		sign;

	if (ft_strnumcmp((char *)str, "-9223372036854775808", "0123456789") < 0)
		return (0);
	if (ft_strnumcmp((char *)str, "9223372036854775807", "0123456789") > 0)
		return (-1);
	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	i--;
	while (ft_isdigit(str[++i]))
		result = result * 10 + str[i] - '0';
	return (sign * result);
}
