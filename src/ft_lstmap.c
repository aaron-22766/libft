/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:22:16 by arabenst          #+#    #+#             */
/*   Updated: 2023/02/28 15:00:57 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*ft_newlst(t_list *new_lst, t_list *lst, void *(*f)(void *)
							, void (*del)(void *))
{
	t_list	*add;

	add = ft_lstnew(f(lst->content));
	if (add == NULL)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	ft_lstadd_back(&new_lst, add);
	return (new_lst);
}

// DESCRIPTION
// Iterates the list ’lst’ and applies the function ’f’ on the content of
// each node. Creates a new list resulting of the successive applications
// of the function ’f’. The ’del’ function is used to delete the content
// of a node if needed.
// RETURN
// Success: The new list.
// Fail: NULL, if ’lst’ is NULL or memory allocation failed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		ft_newlst(new_lst, lst, f, del);
		lst = lst->next;
	}
	return (new_lst);
}
