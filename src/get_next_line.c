/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:16:32 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 12:23:56 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_read_to_cache(int fd, char **cache)
{
	char		*buf;
	ssize_t		bytes_read;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return ;
	bytes_read = 1;
	while (!gnl_strrchr(*cache, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(*cache);
			*cache = NULL;
			break ;
		}
		buf[bytes_read] = '\0';
		gnl_strjoin(cache, buf);
	}
	free(buf);
}

static void	ft_make_line(char **cache, char **line)
{
	int		i;

	if (!(*cache) || !(*cache)[0])
		return ;
	i = 0;
	while ((*cache)[i] && (*cache)[i] != '\n')
		i++;
	*line = malloc(sizeof(char) * (i + 2));
	if (!(*line))
		return ;
	i = 0;
	while ((*cache)[i] && (*cache)[i] != '\n')
	{
		(*line)[i] = (*cache)[i];
		i++;
	}
	if ((*cache)[i] == '\n')
	{
		(*line)[i] = (*cache)[i];
		i++;
	}
	(*line)[i] = '\0';
}

static void	ft_save_rest(int fd, char **cache, t_chain **head)
{
	char	*rest;
	int		i;
	int		j;

	i = 0;
	if (!(*cache))
		return ;
	while ((*cache)[i] && (*cache)[i] != '\n')
		i++;
	if (!(*cache)[i])
	{
		free(*cache);
		gnl_get_from_fd(fd, head)->str = NULL;
		return ;
	}
	rest = malloc(sizeof(char) * (gnl_strlen(*cache + ++i) + 1));
	if (!rest)
		return ;
	j = 0;
	while ((*cache)[i])
		rest[j++] = (*cache)[i++];
	rest[j] = '\0';
	free(*cache);
	gnl_get_from_fd(fd, head)->str = rest;
}

static void	ft_clean_chain(t_chain **head)
{
	t_chain	*current;
	t_chain	*prev;
	t_chain	*temp;

	if (!(*head))
		return ;
	current = *head;
	while (current)
	{
		temp = current->next;
		if (!current->str)
		{
			if (current == *head)
				*head = current->next;
			else
				prev->next = current->next;
			free(current);
		}
		else
			prev = current;
		current = temp;
	}
}

// DESCRIPTION
// Reads a line from a file descriptor. Repeated calls let you read one line
// at a time. The line includes the terminating '\\n' character, except if no
// '\\n' is at EOF. The macro BUFFER_SIZE defines the buffer size for read()
// and can be changed when compiling. There will be undefined behavior if
// the file has changed since the last call or if the file is a binary file.
// RETURN
// Success: String containing the read line. NULL, if EOF is reached.
// Fail: NULL, if fd < 0, BUFFER_SIZE < 0 or memory allocation fails
char	*get_next_line(int fd)
{
	static t_chain	*head;
	char			*cache;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	cache = gnl_get_from_fd(fd, &head)->str;
	line = NULL;
	ft_read_to_cache(fd, &cache);
	ft_make_line(&cache, &line);
	ft_save_rest(fd, &cache, &head);
	if (!cache)
		gnl_get_from_fd(fd, &head)->str = NULL;
	ft_clean_chain(&head);
	return (line);
}
