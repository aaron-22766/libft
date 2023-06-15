/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:48:31 by arabenst          #+#    #+#             */
/*   Updated: 2023/06/15 13:01:24 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

char	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
