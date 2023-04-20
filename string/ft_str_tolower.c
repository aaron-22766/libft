/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:35:19 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/20 10:44:49 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_str_tolower(char *str)
{
	size_t	i;

	i = -1;
	while (str && str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}
