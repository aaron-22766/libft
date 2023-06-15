/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:02:39 by arabenst          #+#    #+#             */
/*   Updated: 2023/06/15 13:00:56 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../libft.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

// DESCRITPION
// Computes the length of the string ’s’.
// RETURN
// Length of the string.
size_t	ft_strlen(const char *s);

// DESCRITPION
// Converts every lowercase letter in ’str’ to an uppercase letter.
// RETURN
// ’str’
char	*ft_str_toupper(char *str);

// DESCRITPION
// Converts every uppercase letter in ’str’ to a lowercase letter.
// RETURN
// ’str’
char	*ft_str_tolower(char *str);

// DESRIPTION
// Copies ’src’ to ’dst’, taking the full size of the destination buffer
// and guaranteeing NUL-termination if there is room (should be included in
// ’dstsize’). Copies up to ’dstsize’ - 1 characters from the string ’src’ to
// ’dst’, NUL-terminating the result if ’dstsize’ is not 0.
// If ’src’ and ’dst’ overlap, the behavior is undefined.
// RETURN
// The length of the string it tried to create (length of ’src’).
// If the return value is >= ’dstsize’, the output string has been truncated.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

// DESRIPTION
// Concatenates ’src’ to ’dst’, taking the full size of the destination buffer
// and guaranteeing NUL-termination if there is room (should be included in
// ’dstsize’). It will append at most ’dstsize’ - strlen(’dst’) - 1 characters.
// It will then NUL-terminate, unless ’dstsize’ is 0 or the original ’dst’
// string was longer than ’dstsize’ (means that either ’dstsize’ is incorrect
// or that ’dst’ is not a proper string).
// If ’src’ and ’dst’ overlap, the behavior is undefined.
// RETURN
// The length of the string it tried to create (length ’dst’ + ’src’).
// If the return value is >= ’dstsize’, the output string has been truncated.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// DESRIPTION
// If there is not enough space in the destination buffer to concatenate ’src’
// to ’dst’, sufficient memory will be allocated and ’dst’ will be replaced
// without memory leaks.
// If there is enough space, a regular strlcat will be performed.
// If ’src’ and ’dst’ overlap, the behavior is undefined.
// RETURN
// Success: The current size of the destination buffer (’dstsize’).
// If return > ’dstsize’, new memory was allocated.
// If return == ’dstsize’, a regular strlcat was performed.
// Fail: 0, if memory allocation failed
size_t	ft_strlcat_realloc(char **dst, const char *src, size_t dstsize);

// DESCRIPTION
// Locates the first occurrence of ’c’ (converted to a char)
// in the string pointed to by ’s’. The terminating null character
// is considered to be part of the string; therefore if ’c’ is '\0',
// the functions locate the terminating '\0'.
// RETURN
// Success: Pointer to the located character
// Fail: NULL, if the character is not contained in the string
char	*ft_strchr(const char *s, int c);

// DESCRIPTION
// Locates the last occurrence of ’c’ (converted to a char)
// in the string pointed to by ’s’. The terminating null character
// is considered to be part of the string; therefore if ’c’ is '\0',
// the functions locate the terminating '\0'.
// RETURN
// Success: Pointer to the located character
// Fail: NULL, if the character is not contained in the string
char	*ft_strrchr(const char *s, int c);

// DESCRIPTION
// Locates the first occurrence of ’c’ (converted to a char)
// in the string pointed to by ’s’. The terminating null character
// is considered to be part of the string; therefore if ’c’ is '\0',
// the functions locate the terminating '\0'.
// RETURN
// Success: Index of the located character
// Fail: -1, if the character is not contained in the string
ssize_t	ft_strchr_index(const char *s, int c);

// DESCRIPTION
// Locates the last occurrence of ’c’ (converted to a char)
// in the string pointed to by ’s’. The terminating null character
// is considered to be part of the string; therefore if ’c’ is '\0',
// the functions locate the terminating '\0'.
// RETURN
// Success: Index of the located character
// Fail: -1, if the character is not contained in the string
ssize_t	ft_strrchr_index(const char *s, int c);

// DESCRIPTION
// Compares the null-terminated strings ’s1’ and ’s2’.
// Characters that appear after a '\0' character are not compared.
// RETURN
// An integer greater than, equal to, or less than 0, according as the
// string ’s1’ is greater than, equal to, or less than the string ’s2’.
int		ft_strcmp(char *s1, char *s2);

// DESCRIPTION
// Compares ’n’ characters of the null-terminated strings ’s1’ and ’s2’.
// Characters that appear after a '\0' character are not compared.
// RETURN
// An integer greater than, equal to, or less than 0, according as the
// string ’s1’ is greater than, equal to, or less than the string ’s2’.
// 0, if n is zero.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// DESRIPTION
// Copies ’src’ to ’dst’ (including the terminating NULL-character).
// If ’src’ and ’dst’ overlap, the behavior is undefined.
// ATTENTION
// Segfaults if ’src’ is bigger than ’dst’!
// RETURN
// ’dst’
char	*ft_strcpy(char *dst, const char *src);

// DESRIPTION
// Copies at most ’len’ characters from ’src’ to ’dst’.
// If ’src’ is less than ’len’ characters long, the remainder of ’dst’
// is filled with NULL-characters. Otherwise, ’dst’ is not terminated.
// If ’src’ and ’dst’ overlap, the behavior is undefined.
// ATTENTION
// Segfaults if ’src’ is bigger than ’dst’!
// RETURN
// ’dst’
char	*ft_strncpy(char *dst, const char *src, size_t len);

// DESCRIPTION
// Locates the first occurrence of the null-terminated string ’needle’
// in the string ’haystack’, where not more than ’len’ characters are searched.
// Characters that appear after a '\0' character are not searched.
// RETURN
// Success: ’haystack’, if ’needle’ is an empty string.
// The pointer to the first character of the first occurrence
// of ’needle’ in ’haystack’, if ’needle’ occurs in ’haystack’.
// Fail: NULL, if ’len’ is zero or ’needle’ occurs nowhere in ’haystack’.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// DESCRIPTION
// Allocates sufficient memory for a copy of the string ’s1’ and does the copy
// RETURN
// Success: The pointer to the newly created string
// Fail: NULL, if memory allocation failed
char	*ft_strdup(const char *s1);

// DESCRIPTION
// Allocates a substring from the string ’s’. The substring
// begins at index ’start’ and is of maximum size ’len’.
// RETURN
// Success: The pointer to the newly created string
// (empty if strlen of ’s’ is less than ’start’)
// Fail: NULL, if ’s’ is NULL or memory allocation failed
char	*ft_substr(char const *s, unsigned int start, size_t len);

// DESCRIPTION
// Allocates new string, which is the result
// of the concatenation of ’s1’ and ’s2’.
// RETURN
// Success: The pointer to the newly created string
// Fail: NULL, if memory allocation failed
char	*ft_strjoin(char const *s1, char const *s2);

// DESCRIPTION
// Allocates a copy of ’s1’ with the characters specified in ’set’
// removed from the beginning and the end of the string.
// RETURN
// Success: The trimmed string.
// Fail: NULL, if memory allocation failed.
char	*ft_strtrim(char const *s1, char const *set);

// DESCRIPTION
// Allocates an array of strings obtained by splitting ’s’ using the character
// ’c’ as a delimiter. Passing a null character as ’c’, the string will be
// splitted by each character. The array ends with a NULL pointer.
// RETURN
// Success: The array of new strings resulting from the split
// Fail: NULL, if memory allocation failed
char	**ft_split(char const *s, char c);

// DESCRIPTION
// Applies the function ’f’ to each character of the string ’s’,
// and passing its index as first argument to create a new string
// resulting from successive applications of ’f’.
// RETURN
// Success: The pointer to the newly created string
// Fail: NULL, if ’s’ is NULL or memory allocation failed
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// DESCRIPTION
// Applies the function ’f’ on each character of the string passed as argument,
// passing its index as first argument. Each character is passed by address
// to ’f’ to be modified if necessary.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// RETURN
// Number of occurences of the char ’c’ in ’str’
size_t	ft_count_chars(char *str, char c);

// DESCRIPTION
// Similar to ft_strjoin, it allocates a new string, which is the result of
// the concatenation of ’dst’ and ’src’. The order of the concatination depends
// on the value of ’dstleft’. If ’dstleft’ is 0, ’dst’ will be appended to
// ’src’, otherwise ’src’ will be appended to ’dst’. It frees ’dst’ if
// necessary and assigns the pointer to the newly created string to ’dst’.
// RETURN
// Success: ’dst’
// Fail: NULL, if ’src’ is NULL or memory allocation failed
char	**ft_strmerge(char **dst, char *src, int dstleft);

// DESCRIPTION
// Reverses the string ’str’ in place.
// RETURN
// Success: Pointer to the reversed string
// Fail: NULL, if ’str’ is NULL
char	*ft_revstr(char *str);

// DESCRIPTION
// Inserts the string ’insert’ into ’str’, replacing
// the portion indicated by ’start’ and ’len’ of ’str’.
// If memory allocation fails, ’str’ remains unchanged.
// RETURN
// Success: true
// Fail: false, if ’str’ remained unchanged
char	ft_str_insert(char **str, char *insert, size_t start, size_t len);

#endif
