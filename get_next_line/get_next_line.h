/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:25:31 by arabenst          #+#    #+#             */
/*   Updated: 2023/11/01 08:42:29 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* ************************************************************************** */
/*                                  INCLUDES                                  */
/* ************************************************************************** */

# include "../libft.h"

/* ************************************************************************** */
/*                                  DEFINES                                   */
/* ************************************************************************** */

# ifndef GNL_BUFFER_SIZE
#  define GNL_BUFFER_SIZE 1
# endif

/* ************************************************************************** */
/*                                  STRUCTS                                   */
/* ************************************************************************** */

typedef struct s_gnl
{
	int				fd;
	char			*str;
	struct s_gnl	*next;
}	t_gnl;

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

/**
 * @brief Reads a line from a file descriptor. Repeated calls let you read one
 * line at a time. The line includes the terminating '\\n' character, except if
 * no '\\n' is at EOF. The macro GNL_BUFFER_SIZE defines the buffer size for
 * read() and can be changed when compiling. There will be undefined behavior
 * if the file has changed since the last call or if the file is a binary file.
 * 
 * @param fd File descriptor of the file to read from
 * @retval ✔︎ String containing the read line. NULL, if EOF is reached.
 * @retval ✘ NULL, if fd < 0, GNL_BUFFER_SIZE < 0 or memory allocation fails
 */
char	*get_next_line(int fd);

size_t	gnl_strlen(const char *s);
char	*gnl_strrchr(const char *s, int c);
void	gnl_strjoin(char **s1, char *s2);
t_gnl	*gnl_get_from_fd(int fd, t_gnl **head);

#endif