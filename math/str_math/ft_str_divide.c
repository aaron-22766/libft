/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_divide.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:51:11 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/03 11:08:30 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	*ft_str_divide(char *dividend, char *divisor)
{
	return (ft_str_divide_in_base(dividend, divisor, "0123456789"));
}
