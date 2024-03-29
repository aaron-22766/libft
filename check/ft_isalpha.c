/* ************************************************************************** */
/*			                                                                */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:53:07 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 13:30:14 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

bool	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
