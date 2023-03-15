/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:13:32 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/15 08:26:01 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

int	ft_count_digits(int n)
{
	int	count;
	int	temp;

	count = 0;
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		count++;
	}
	return (count + !n);
}
