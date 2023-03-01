/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:30:31 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 14:57:11 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chars(int n, int count)
{
	if (n != 0)
		return (ft_chars(n / 10, count + 1));
	return (count);
}

static int	ft_divis(int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (10 * ft_divis(power - 1));
}

// DESCTIPTION
// Allocates and returns a string representing the integer ’n’.
// RETURN
// Success: Pointer to the string.
// Fail: NULL, if memory allocation fails.
char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = ft_chars(n, 0) + (n <= 0);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		if (n == -2147483648)
		{
			n = -147483648;
			str[i++] = '2';
		}
	}
	i--;
	while (++i < size)
		str[i] = '0' + (n * ((n > 0) - (n < 0)) / ft_divis(size - i - 1)) % 10;
	return (str);
}
