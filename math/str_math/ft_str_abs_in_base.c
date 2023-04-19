/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_abs_in_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:28:18 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/18 09:35:12 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	*ft_str_abs_in_base(char *n, char *base)
{
	if (ft_strnum_invalid(n, base))
		return (NULL);
	if (ft_strchr("+-", *n))
		n++;
	while (*n == base[0])
	{
		if (ft_strlen(n) == 1)
			break ;
		n++;
	}
	return (n);
}
