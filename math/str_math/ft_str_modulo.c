/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_modulo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:27:08 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/19 10:28:34 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	*ft_str_modulo(char *dividend, char *divisor)
{
	return (ft_str_modulo_in_base(dividend, divisor, "0123456789"));
}
