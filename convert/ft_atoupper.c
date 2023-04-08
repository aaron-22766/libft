/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:29:14 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/31 12:35:52 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

void	ft_atoupper(char *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i])
		str[i] = ft_toupper(str[i]);
}