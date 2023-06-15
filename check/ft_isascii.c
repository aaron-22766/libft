/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:24:11 by arabenst          #+#    #+#             */
/*   Updated: 2023/06/15 13:01:16 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

char	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
