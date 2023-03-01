/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:49:08 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 10:06:58 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chars(unsigned int n, int count)
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
// Allocates and returns a string representing the unsigned int ’n’.
// RETURN
// Success: Pointer to the string.
// Fail: NULL, if memory allocation fails.
char	*ft_uitoa(unsigned int n)
{
	int		i;
	int		size;
	char	*str;

	size = ft_chars(n, 0);
	if (!n)
		size++;
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < size)
		str[i] = '0' + (n * ((n > 0) - (n < 0)) / ft_divis(size - i - 1)) % 10;
	return (str);
}
