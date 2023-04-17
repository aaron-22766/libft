/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_subtract.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:46:17 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/03 11:08:41 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	*ft_str_subtract(char *minuend, char *subtrahend)
{
	return (ft_str_subtract_in_base(minuend, subtrahend, "0123456789"));
}
