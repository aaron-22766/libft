/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base_custom.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:54:50 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/03 12:08:09 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

char	*ft_convert_custom_bases(char *n, char *from_base, char *to_base)
{
	char	*decimal;
	char	*result;

	if (!n || !from_base || !to_base)
		return (NULL);
	decimal = ft_base_to_decimal(n, from_base);
	result = ft_decimal_to_base(decimal, to_base);
	return (free(decimal), result);
}
