/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strends.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:56:49 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/18 14:09:07 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

bool	ft_strends(char *str, char *sub)
{
	return (!ft_strcmp(ft_strchr(str, '\0') - ft_strlen(sub), sub));
}
