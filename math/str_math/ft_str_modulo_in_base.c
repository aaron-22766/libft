/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_modulo_in_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:28:51 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/19 11:59:35 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	*ft_str_modulo_in_base(char *dividend, char *divisor, char *base)
{
	char	*remainder;
	char	*quotient;
	char	*product;

	if (!dividend || !divisor || !base || ft_strlen(base) < 2)
		return (NULL);
	quotient = ft_str_divide_in_base(dividend, divisor, base);
	product = ft_str_multiply_in_base(quotient, divisor, base);
	free(quotient);
	remainder = ft_str_subtract_in_base(dividend, product, base);
	free(product);
	return (remainder);
}
