/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:02:09 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/02 16:55:27 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCTIPTION
// Converts the initial portion of ’str’ to int representation.
// - ignores whitespaces in the beginning
// - takes either ’+’ or ’-’ in front of the number
// - any non-digit character after the first digit marks the end of the number
// RETURN
// Success: Converted number
// Fail: 0, if an invalid character is in front of the first digit
// or the created number is smaller than INT_MIN
// -1 if the created number is bigger than INT_MAX
int	ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - '0';
		if (sign * result > 2147483647)
			return (-1);
		if (sign * result < -2147483648)
			return (0);
		i++;
	}
	return (sign * result);
}
