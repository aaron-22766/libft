/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:57:46 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/20 12:36:57 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

char	*ft_convert_base(char *n, int from_base, int to_base)
{
	char	*base;
	char	*from;
	char	*to;
	char	*result;

	if (!n || from_base < 2 || from_base > 62 || to_base < 2 || to_base > 62)
		return (NULL);
	base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	from = ft_substr(base, 0, from_base);
	to = ft_substr(base, 0, to_base);
	if (!from || !to)
		return (free(from), free(to), NULL);
	if (from_base <= 36)
		n = ft_atoupper(ft_strdup(n));
	result = ft_convert_base_custom(n, from, to);
	if (from_base <= 36)
		free(n);
	return (free(from), free(to), result);
}
