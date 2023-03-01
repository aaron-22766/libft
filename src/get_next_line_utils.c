/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:27:34 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 12:16:05 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*gnl_strrchr(const char *s, int c)
{
	int		i;

	if (!s)
		return (NULL);
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

void	gnl_strjoin(char **s1, char *s2)
{
	char	*joined;
	int		i;
	int		j;

	if (!s2)
		return ;
	joined = malloc(sizeof(char) * (ft_strlen(*s1) + ft_strlen(s2) + 1));
	if (!joined)
		return ;
	i = 0;
	j = 0;
	if (*s1)
	{
		while ((*s1)[i])
			joined[j++] = (*s1)[i++];
		free(*s1);
	}
	i = 0;
	while (s2[i])
		joined[j++] = s2[i++];
	joined[j] = '\0';
	*s1 = joined;
}

static t_chain	*gnl_lstadd_back(t_chain **lst, int fd)
{
	t_chain	*temp;
	t_chain	*new;

	if (!lst)
		return (NULL);
	new = malloc(sizeof(t_chain));
	if (!new)
		return (NULL);
	new->fd = fd;
	new->str = NULL;
	new->next = NULL;
	if (!(*lst))
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}

t_chain	*gnl_get_from_fd(int fd, t_chain **head)
{
	t_chain	*temp;

	if (!(*head))
		*head = gnl_lstadd_back(NULL, fd);
	temp = *head;
	while (temp && temp->fd != fd)
		temp = temp->next;
	if (!temp)
		temp = gnl_lstadd_back(head, fd);
	return (temp);
}
