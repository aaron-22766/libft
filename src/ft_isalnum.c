/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:24:42 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 15:30:56 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// RETURN
// 1: if ’c’ is an alphabetic character or a digit
// 0: otherwise
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
