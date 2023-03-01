/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:05:11 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 15:31:47 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// RETURN
// 1: if ’c’ is an uppercase character
// 0: otherwise
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
