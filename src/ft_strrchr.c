/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:27:31 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 08:32:01 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Locates the last occurrence of ’c’ (converted to a char)
// in the string pointed to by ’s’. The terminating null character
// is considered to be part of the string; therefore if ’c’ is '\0',
// the functions locate the terminating '\0'.
// RETURN
// Success: Pointer to the located character
// Fail: NULL, if the character is not contained in the string
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	if ((char)c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
