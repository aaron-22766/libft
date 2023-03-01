/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:14:56 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 14:54:57 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
// Takes as a parameter a node and frees the memory of the node’s content
// using the function ’del’ given as a parameter and free the node.
// The memory of ’next’ must not be freed.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del || !(lst->content))
		return ;
	del(lst->content);
	free(lst);
}
