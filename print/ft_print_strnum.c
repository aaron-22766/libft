/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:42:51 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 12:41:29 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_print_strnum(char *strnum)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (ft_strchr("+-", strnum[i]))
		ft_putchar_fd(strnum[i++], STDOUT_FILENO);
	len = ft_strlen(strnum);
	while (strnum[i])
	{
		if (len > 3 && (len - i) % 3 == 0)
			ft_putchar_fd(',', STDOUT_FILENO);
		ft_putchar_fd(strnum[i++], STDOUT_FILENO);
	}
}
