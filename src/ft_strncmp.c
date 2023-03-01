/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:45:12 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 09:43:58 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Compares ’n’ characters of the null-terminated strings ’s1’ and ’s2’.
// Characters that appear after a '\0' character are not compared.
// RETURN
// An integer greater than, equal to, or less than 0, according as the
// string ’s1’ is greater than, equal to, or less than the string ’s2’.
// 0, if n is zero.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
