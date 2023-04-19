/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:42:51 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/18 14:10:45 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_print_strnum(char *strnum, char *base)
{
	int		i;
	size_t	len;

	if (ft_strchr("+-", strnum[0]))
		ft_putchar_fd(strnum[0], STDOUT_FILENO);
	strnum = ft_str_abs_in_base(strnum, base);
	len = ft_strlen(strnum);
	i = -1;
	while (strnum[++i])
	{
		if (len > 3 && (len - i) % 3 == 0)
			ft_putchar_fd(',', STDOUT_FILENO);
		ft_putchar_fd(strnum[i], STDOUT_FILENO);
	}
}
