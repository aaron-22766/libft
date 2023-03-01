/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:14:09 by arabenst          #+#    #+#             */
/*   Updated: 2023/03/01 12:25:51 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* ************************************************************************** */
/*                                  INCLUDES                                  */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/* ************************************************************************** */
/*                                  DEFINES                                   */
/* ************************************************************************** */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/* ************************************************************************** */
/*                                  STRUCTS                                   */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_chain
{
	int				fd;
	char			*str;
	struct s_chain	*next;
}					t_chain;

/* ************************************************************************** */
/*                            MANDATORY FUNCTIONS                             */
/*                                   PART 1                                   */
/* ************************************************************************** */

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

/* ************************************************************************** */
/*                                   PART 2                                   */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
ssize_t	ft_putchar_fd(char c, int fd);
ssize_t	ft_putstr_fd(char *s, int fd);
ssize_t	ft_putendl_fd(char *s, int fd);
ssize_t	ft_putnbr_fd(int n, int fd);

/* ************************************************************************** */
/*                                   BONUS                                    */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ************************************************************************** */
/*                               GET_NEXT_LINE                                */
/* ************************************************************************** */

// get_next_line.c

char	*get_next_line(int fd);

// get_next_line_utils.c

size_t	gnl_strlen(const char *s);
char	*gnl_strrchr(const char *s, int c);
void	gnl_strjoin(char **s1, char *s2);
t_chain	*gnl_get_from_fd(int fd, t_chain **head);

/* ************************************************************************** */
/*                                 FT_PRINTF                                  */
/* ************************************************************************** */

// ft_printf.c

int		ft_printf(const char *format, ...);

// ft_printf_specs.c

void	ft_get_string(va_list *args, char *tag, char **cache);
void	ft_get_pointer(va_list *args, char *tag, char **cache);
void	ft_get_int(va_list *args, char *tag, char **cache);
void	ft_get_uint(va_list *args, char *tag, char **cache);
void	ft_get_hex(va_list *args, char *tag, char **cache, int lowercase);

// ft_printf_specs2.c

int		ft_putc(va_list *args, char *tag, int *prtd);
void	ft_get_percent(char *tag, char **cache);

// ft_printf_utils.c

void	ft_apply_width(char *tag, char **cache);
void	ft_apply_precision(char *tag, char **cache, int nu);
void	ft_apply_zero_padding(char *tag, char **cache);
void	ft_apply_alternate(char *tag, char **cache, unsigned int u);
int		ft_valid_tag(const char *tag);

/* ************************************************************************** */
/*                                  EXTENDED                                  */
/* ************************************************************************** */

int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_iswhitespace(int c);
char	**ft_strmerge(char **dst, char *src, int dstleft);
char	*ft_uitoa(unsigned int n);
char	*ft_ultoa_hex(unsigned long n, int lowercase);

#endif