/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:14:04 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/18 16:51:13 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

bool	ft_is_prime(int n)
{
	int	check;

	check = 2;
	if (n < 2)
		return (false);
	while (check <= n / check)
	{
		if (n % check == 0)
			return (0);
		check++;
	}
	return (true);
}
