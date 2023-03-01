/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:00:59 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 15:31:35 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// RETURN
// 1: if ’c’ is a whitespace character
// 0: otherwise
int	ft_iswhitespace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}
