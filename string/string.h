/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:34:20 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 18:08:18 by arabenst         ###   ########.fr       */
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

/**
 * @brief Computes the length of the string ’s’. (not protected)
 * 
 * @param s String
 * @retval Length of the string
 * @warning Segfaults,, if ’s’ is NULL.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Computes the length of the string ’s’. (protected)
 * 
 * @param s String
 * @retval ✔︎ Length of the string
 * @retval ✘ 0, if ’s’ is NULL.
 */
size_t	ft_strplen(const char *s);

/**
 * @brief Converts every lowercase letter in ’str’ to an uppercase letter.
 * 
 * @param str String to convert
 * @return ’str’
 */
char	*ft_str_toupper(char *str);

/**
 * @brief Converts every uppercase letter in ’str’ to a lowercase letter.
 * 
 * @param str String to convert
 * @return ’str’
 */
char	*ft_str_tolower(char *str);

/**
 * @brief Copies ’src’ to ’dst’, taking the full size of the destination buffer
 * and guaranteeing NUL-termination if there is room (should be included in
 * ’dstsize’). Copies up to ’dstsize’ - 1 characters from the string ’src’ to
 * ’dst’, NUL-terminating the result if ’dstsize’ is not 0. If ’src’ and ’dst’
 * overlap, the behavior is undefined.
 * 
 * @param dst Destination string
 * @param src String to concatenate
 * @param dstsize Size of the destination buffer
 * @return The length of the string it tried to create (length of ’src’). If
 * the return value is >= ’dstsize’, the output string has been truncated.
 * @warning Segfaults, if ’dst’ or ’src’ are NULL
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Concatenates ’src’ to ’dst’, taking the full size of the destination
 * buffer and guaranteeing NUL-termination if there is room (should be included
 * in ’dstsize’). It will append at most ’dstsize’ - strlen(’dst’) - 1
 * characters. It will then NUL-terminate, unless ’dstsize’ is 0 or the
 * original ’dst’ string was longer than ’dstsize’ (means that either ’dstsize’
 * is incorrect or that ’dst’ is not a proper string). If ’src’ and ’dst’
 * overlap, the behavior is undefined.
 * 
 * @param dst Destination string
 * @param src String to concatenate
 * @param dstsize Size of the destination buffer
 * @return The length of the string it tried to create (length ’dst’ + ’src’).
 * If the return value is >= ’dstsize’, the output string has been truncated.
 * @warning Segfaults, if ’dst’ or ’src’ are NULL
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief If there is not enough space in the destination buffer to concatenate
 * ’src’ to ’dst’, sufficient memory will be allocated and ’dst’ will be
 * replaced without memory leaks. If there is enough space, a regular strlcat
 * will be performed. If ’src’ and ’dst’ overlap, the behavior is undefined.
 * 
 * @param dst Pointer to destination string
 * @param src String to concatenate
 * @param dstsize Size of the destination buffer
 * @retval ✔︎ The current size of the destination buffer
 * (if larger than previous ’dstsize’, new memory was allocated,
 * if it remained the same, a regular strlcat was performed)
 * @retval ✘ 0, if memory allocation failed
 * @warning Segfaults, if ’dst’ or ’src’ are NULL
 */
size_t	ft_strlcat_realloc(char **dst, const char *src, size_t dstsize);

/**
 * @brief Locates the first occurrence of the character ’c’ in the string ’s’.
 * If ’c’ is a NULL-character, the terminating NULL-character of ’s’ is located.
 * 
 * @param s String to search through
 * @param c Character to search
 * @retval ✔︎ Address of the located character
 * @retval ✘ NULL if the character is not contained in the string
 * @warning Segfaults, if ’s’ is NULL
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Locates the last occurrence of the character ’c’ in the string ’s’.
 * If ’c’ is a NULL-character, the terminating NULL-character of ’s’ is located.
 * 
 * @param s String to search through
 * @param c Character to search
 * @retval ✔︎ Address of the located character
 * @retval ✘ NULL if the character is not contained in the string
 * @warning Segfaults, if ’s’ is NULL
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Locates the first occurrence of the character ’c’ in the string ’s’.
 * If ’c’ is a NULL-character, the terminating NULL-character of ’s’ is located.
 * 
 * @param s String to search through
 * @param c Character to search
 * @retval ✔︎ Index of the located character
 * @retval ✘ -1 if the character is not contained in the string
 * @warning Segfaults, if ’s’ is NULL
 */
ssize_t	ft_strchr_index(const char *s, int c);

/**
 * @brief Locates the last occurrence of the character ’c’ in the string ’s’.
 * If ’c’ is a NULL-character, the terminating NULL-character of ’s’ is located.
 * 
 * @param s String to search through
 * @param c Character to search
 * @retval ✔︎ Index of the located character
 * @retval ✘ -1 if the character is not contained in the string
 * @warning Segfaults, if ’s’ is NULL
 */
ssize_t	ft_strrchr_index(const char *s, int c);

/**
 * @brief Spans the initial part of the NULL-terminated string ’s’ as long as
 * the characters from ’s’ occur in the NULL-terminated string ’charset’.
 * 
 * @param s String to search through
 * @param charset Set of characters to ignore
 * @retval ✔︎ Index of the first character of ’s’ which is not in ’charset’
 * @retval ✘ Index of the first NULL-character,
 * if every character of ’s’ appears in ’charset’
 * @warning Segfaults, if any of the strings are NULL
 */
size_t	ft_strspn(const char *s, const char *charset);

/**
 * @brief Spans the initial part of the NULL-terminated string ’s’ as long as
 * the characters from ’s’ do not occur in the NULL-terminated string ’charset’
 * (it spans the complement of ’charset’).
 * 
 * @param s String to search through
 * @param charset Set of characters to search for
 * @retval ✔︎ Index of the first character of ’s’ which is also in ’charset’
 * @retval ✘ Index of the first NULL-character,
 * if every character of ’s’ does not appear in ’charset’
 * @warning Segfaults, if any of the strings are NULL
 */
size_t	ft_strcspn(const char *s, const char *charset);

/**
 * @brief Spans the trailing part of the NULL-terminated string ’s’ as long as
 * the characters from ’s’ occur in the NULL-terminated string ’charset’.
 * 
 * @param s String to search through
 * @param charset Set of characters to ignore
 * @retval ✔︎ Index of the last character of ’s’ which is not in ’charset’
 * @retval ✘ Index of the first NULL-character,
 * if every character of ’s’ appears in ’charset’
 * @warning Segfaults, if any of the strings are NULL
 */
size_t	ft_strrspn(const char *s, const char *charset);

/**
 * @brief Spans the trailing part of the NULL-terminated string ’s’ as long as
 * the characters from ’s’ occur in the NULL-terminated string ’charset’.
 * 
 * @param s String to search through
 * @param charset Set of characters to ignore
 * @retval ✔︎ Index of the last character of ’s’ which is not in ’charset’
 * @retval ✘ Index of the first NULL-character,
 * if every character of ’s’ does not appear in
 * ’charset’
 * @warning Segfaults, if any of the strings are NULL
 */
size_t	ft_strrcspn(const char *s, const char *charset);

/**
 * @brief Compares the two strings ’s1’ and ’s2’.
 * 
 * @param s1 First string
 * @param s2 Second string
 * @return An integer greater than, equal to, or less than 0, according as the 
 * string ’s1’ is greater than, equal to, or less than the string ’s2’
 * @warning Segfaults, if ’s1’ or ’s2’ are NULL
 */
int		ft_strcmp(char *s1, char *s2);

/**
 * @brief Compares ’n’ characters of the two strings ’s1’ and ’s2’.
 * 
 * @param s1 First string
 * @param s2 Second string
 * @param n Number of characters to compare
 * @retval An integer greater than, equal to, or less than 0, according as the
 * string ’s1’ is greater than, equal to, or less than the string ’s2’
 * @retval 0, if ’n’ is 0.
 * @warning Segfaults, if ’s1’ or ’s2’ are NULL
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Copies ’src’ to ’dst’ (including the terminating NULL-character).
 * If ’src’ and ’dst’ overlap, the behavior is undefined.
 * 
 * @param dst String to copy to
 * @param src String to copy from
 * @return ’dst’
 * @warning Segfaults, if ’src’ is bigger than ’dst’
 */
char	*ft_strcpy(char *dst, const char *src);

/**
 * @brief Copies at most ’len’ characters from ’src’ to ’dst’. If ’src’ is less
 * than ’len’ characters long, the remainder of ’dst’ is filled with
 * NULL-characters. Otherwise, ’dst’ is not terminated. If ’src’ and ’dst’
 * overlap, the behavior is undefined.
 * 
 * @param dst String to copy to
 * @param src String to copy from
 * @param len Length of ’src’ to copy
 * @return ’dst’
 * @warning Segfaults, if ’src’ is bigger than ’dst’
 */
char	*ft_strncpy(char *dst, const char *src, size_t len);

/**
 * @brief Locates the first occurrence of the null-terminated string ’needle’
 * in the string ’haystack’, where not more than ’len’ characters are searched.
 * 
 * @param haystack String to search in
 * @param needle String to search for
 * @param len Length of ’haystack’ that is searched
 * @retval ✔︎ Pointer of the first occurrence of ’needle’ in ’haystack’
 * @retval ✘ NULL, if ’len’ is 0 or ’haystack’ does not contain ’needle’
 * @warning Segfaults, if ’haystack’ or ’needle’ are NULL
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Allocates a copy of ’s1’
 * 
 * @param s1 String to duplicate
 * @retval ✔︎ Duplicate
 * @retval ✘ NULL, if memory allocation failed
 * @warning Segfaults, if ’s1’ is NULL
 */
char	*ft_strdup(const char *s1);

/**
 * @brief Allocates a sub-string from the string ’s’.
 * 
 * @param s Base string
 * @param start Starting index of the sub-string
 * @param len Length of the sub-string
 * @retval ✔︎ Sub-string
 * (empty if ’start’ is greater than or equals to strlen of ’s’)
 * @retval ✘ NULL, if ’s’ is NULL or memory allocation failed
 */
char	*ft_substr(const char *s, unsigned int start, size_t len);

/**
 * @brief Allocates new string, which is the result of the concatenation of
 * ’s1’ and ’s2’.
 * 
 * @param s1 Left string
 * @param s2 Right string
 * @retval ✔︎ Concatenated string
 * @retval ✘ NULL, if ’s1’ or ’s2’ are NULL or memory allocation failed
 */
char	*ft_strjoin(const char *s1, const char *s2);

/**
 * @brief Allocates a copy of ’s1’ with all characters specified in ’set’
 * removed from the beginning and the end of the string.
 * 
 * @param s1 String to trim
 * @param set String of characters that should be trimmed
 * @retval ✔︎ Trimmed string
 * @retval ✘ NULL, if ’s1’ or ’set’ are NULL or memory allocation failed
 */
char	*ft_strtrim(const char *s1, const char *set);

/**
 * @brief Allocates a NULL-terminated array of strings obtained by splitting
 * ’s’ using the character ’c’ as a delimiter. Passing a null character as ’c’,
 * the string will be split by each character.
 * 
 * @param s The string to split
 * @param c Delimiting character
 * @retval ✔︎ The array of new strings resulting from the split
 * @retval ✘ NULL, if ’s’ is NULL or memory allocation failed
 */
char	**ft_split(const char *s, char c);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’, and
 * passing its index as first argument to create a new string resulting from
 * successive applications of ’f’.
 * 
 * @param s String
 * @param f Function
 * @retval ✔︎ The new string
 * @retval ✘ NULL, if ’s’ is NULL or memory allocation failed
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function ’f’ on each character of the string passed as
 * argument, passing its index as first argument. Each character is passed by
 * address to ’f’ to be modified if necessary.
 * 
 * @param s String
 * @param f Function
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief Counts the number of occurences of ’c’ in ’str’.
 * 
 * @param str String
 * @param c Character
 * @return Number of occurences of the char ’c’ in ’str’
 */
size_t	ft_count_chars(char *str, char c);

/**
 * @brief Similar to ft_strjoin, it allocates a new string, which is the result
 * of the concatenation of ’dst’ and ’src’. The order of the concatination
 * depends on the value of ’dstleft’.  It frees ’dst’ if
 * necessary and assigns the pointer to the newly created string to ’dst’.
 * 
 * @param dst Pointer to destination string.
 * @param src String to use for concatenation.
 * @param dstleft Boolean indicating how the concatenation should happen.
 * If ’dstleft’ is true, ’src’ will be appended to ’dst’, otherwise ’dst’ will
 * be appended to ’src’.
 * @retval ✔︎ ’dst’
 * @retval ✘ NULL, if ’src’ is NULL or memory allocation failed
 */
char	**ft_strmerge(char **dst, char *src, bool dstleft);

/**
 * @brief Reverses the string ’str’ in place.
 * 
 * @param str String to reverse
 * @retval ✔︎ Pointer to the reversed string
 * @retval ✘ NULL, if ’str’ is NULL
 */
char	*ft_revstr(char *str);

/**
 * @brief Inserts the string ’insert’ into ’str’, replacing the portion
 * indicated by ’start’ and ’len’ of ’str’. If memory allocation fails,
 * ’str’ remains unchanged.
 * 
 * @param str Pointer to string on which the insertion will be applied.
 * @param insert String to insert
 * @param start Index of portion to be replaced
 * @param len Length of portion to be replaced
 * @retval ✔︎ true
 * @retval ✘ false if memory allocation failed
 */
bool	ft_str_insert(char **str, char *insert, size_t start, size_t len);

/**
 * @brief Checks if the given base string ends with the specified substring.
 * 
 * @param str The base string to check
 * @param sub The substring to look for at the end of the base string
 * @retval true: if the base string ends with the specified substring
 * @retval false: otherwise
 */
bool	ft_strends(char *str, char *sub);

#endif
