/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:03:59 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/13 14:37:17 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

int	ft_factorial(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (1);
	return (n * ft_factorial(n - 1));
}
