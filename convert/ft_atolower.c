/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:26:58 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/31 12:36:19 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

void	ft_atolower(char *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
}
