/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:22:49 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 09:59:14 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Allocates a substring from the string ’s’. The substring
// begins at index ’start’ and is of maximum size ’len’.
// RETURN
// Success: The pointer to the newly created string
// (empty if strlen of ’s’ is less than ’start’)
// Fail: NULL, if ’s’ is NULL or memory allocation failed
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, (len + 1) * sizeof(char));
	return (str);
}
