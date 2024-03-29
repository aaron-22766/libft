/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:02:31 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 15:37:57 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

static	int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	count;

	if (!s[0])
		return (0);
	if (c == '\0')
		return (ft_strlen(s));
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count - (s[i - 1] == c));
}

static	int	ft_wordstart(const char *s, char c, int w)
{
	int	i;

	if (c == '\0')
		return (w);
	i = 0;
	while (s[i] == c)
		i++;
	while (w)
	{
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
		w--;
	}
	return (i);
}

static	int	ft_wordlen(const char *s, char c, int w)
{
	int	i;
	int	a;

	if (c == '\0')
		return (1);
	i = ft_wordstart(s, c, w);
	a = i;
	while (s[i] && s[i] != c)
		i++;
	return (i - a);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		wordcount;
	char	**arr;

	if (!s)
		return (NULL);
	wordcount = ft_wordcount(s, c);
	arr = ft_calloc(wordcount + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < wordcount)
	{
		arr[i] = ft_substr(s, ft_wordstart(s, c, i), ft_wordlen(s, c, i));
		if (!arr[i])
			return (NULL);
		i++;
	}
	return (arr);
}
