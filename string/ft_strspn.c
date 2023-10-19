/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:48:11 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 16:22:48 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	i;

	i = 0;
	while (*ft_strchr(charset, s[i]))
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "aaccbbaaddaabbccadd";
	char	*set = "abc";

	printf("%zu\n", strspn(str, set));
	printf("%zu\n", ft_strspn(str, set));
}
