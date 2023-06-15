/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:50:56 by arabenst          #+#    #+#             */
/*   Updated: 2023/06/15 13:14:34 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	ft_str_insert(char **str, char *insert, size_t start, size_t len)
{
	char	*front;
	char	*back;
	char	*new;

	if (!insert)
		insert = "";
	front = ft_substr(*str, 0, start);
	back = ft_substr(*str, start + len, ft_strlen(*str + start + len));
	if (front && back && ft_asprintf(&new, "%s%s%s", front, insert, back) != -1)
	{
		free(*str);
		*str = new;
		return (true);
	}
	free(front);
	free(back);
	return (false);
}
