/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:03:43 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/17 09:05:24 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

int	ft_base_to_int(char *n, char *from_base)
{
	int		result;
	char	*decimal;

	decimal = ft_base_to_decimal(n, from_base);
	result = ft_atoi(decimal);
	free(decimal);
	return (result);
}
