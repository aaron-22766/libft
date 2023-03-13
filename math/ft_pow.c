/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:05:20 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/13 14:32:10 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

int	ft_pow(int base, int exponent)
{
	if (exponent < 0)
		return (0);
	else if (exponent == 0)
		return (1);
	return (base * ft_pow(base, exponent - 1));
}
