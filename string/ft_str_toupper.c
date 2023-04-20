/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:31:58 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/20 10:45:18 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_str_toupper(char *str)
{
	size_t	i;

	i = -1;
	while (str && str[++i])
		str[i] = ft_toupper(str[i]);
	return (str);
}
