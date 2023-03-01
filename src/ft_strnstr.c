/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:28:10 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 09:52:09 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Locates the first occurrence of the null-terminated string ’needle’
// in the string ’haystack’, where not more than ’len’ characters are searched.
// Characters that appear after a '\0' character are not searched.
// RETURN
// Success: ’haystack’, if ’needle’ is an empty string.
// The pointer to the first character of the first occurrence
// of ’needle’ in ’haystack’, if ’needle’ occurs in ’haystack’.
// Fail: NULL, if ’len’ is zero or ’needle’ occurs nowhere in ’haystack’.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		nlen;

	if (!needle[0])
		return ((char *)haystack);
	if (!len)
		return (NULL);
	nlen = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && i + j < len && haystack[i + j] == needle[j])
			j++;
		if (j == nlen)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
