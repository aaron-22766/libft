/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:03:17 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 15:32:05 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// RETURN
// 1: if ’c’ is a lowercase character
// 0: otherwise
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
