/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:40:31 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/03 11:08:23 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_math.h"

char	*ft_str_add(char *addend_a, char *addend_b)
{
	return (ft_str_add_in_base(addend_a, addend_b, "0123456789"));
}
