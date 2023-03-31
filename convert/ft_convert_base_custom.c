/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base_custom.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:54:50 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/31 15:56:22 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

int	ft_get_index(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

int	ft_result_size(char *n, char *from_base, char *to_base)
{
	char	*div;

	div = ft_atoi(ft_strlen(to_base));
	while (ft_strncmp(n, "0", ft_strlen(n)))
		n = ft_base_division(n, div, from_base);
	free(div);
}

char	*ft_convert_base_custom(char *n, char *from_base, char *to_base)
{
	char	*result;

	if (!n || !from_base || !to_base)
		return (NULL);
	result = ft_calloc(ft_result_size(n, from_base, to_base) + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (ft_strlen(to_base) < ft_strlen(from_base))
		result = ft_lower_base(n, char *from_base, char *to_base);
	else if (ft_strlen(to_base) > ft_strlen(from_base))
		result = ft_higher_base(n, char *from_base, char *to_base);
	else
		result = ft_strdup(n);
	return (result);
}
