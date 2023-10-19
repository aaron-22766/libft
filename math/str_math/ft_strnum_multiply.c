/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnum_multiply.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:48:58 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 10:05:25 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	*ft_strnum_multiply(char *multiplier, char *multiplicand)
{
	return (ft_strnum_multiply_in_base(multiplier, multiplicand, "0123456789"));
}
