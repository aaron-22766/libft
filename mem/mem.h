/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:59:38 by arabenst          #+#    #+#             */
/*   Updated: 2023/10/19 12:24:16 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

/* ************************************************************************** */
/*                                  INCLUDE                                   */
/* ************************************************************************** */

# include "../libft.h"

/* ************************************************************************** */
/*                                 FUNCTIONS                                  */
/* ************************************************************************** */

/**
 * @brief Allocates space for ’count’ elements that are ’size’ bytes of memory.
 * The allocated memory is filled with bytes of value zero.
 * 
 * @param count Number of elements
 * @param size Size of one element
 * @retval ✔︎ Pointer to the allocated memory.
 * @retval ✘ NULL, if ’size’ is 0,
 * ’size’ * ’count’ overflows,
 * or memory allocation fails.
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief Writes ’len’ bytes of value ’c’ (converted to an unsigned char) to
 * the array ’b’.
 * 
 * @param b Pointer to the memory to write to
 * @param c Character to write
 * @param len Number of bytes to write
 * @returns The string ’b’
 */
void	*ft_memset(void *b, int c, size_t len);

/**
 * @brief Writes ’n’ zeroed bytes to the string ’s’.
 * 
 * @param s Pointer to the memory to write to
 * @param n Number of bytes to write
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Copies ’n’ bytes from memory area ’src’ to memory area ’dst’.
 * If ’dst’ and ’src’ overlap, behavior is undefined,
 * in which case ft_memmove should be used.
 * 
 * @param dst Pointer to the memory to copy to
 * @param src Pointer to the memory to copy from
 * @param n Number of bytes to copy
 * @retval ✔︎ Original value of ’dst’
 * @retval ✘ NULL, if ’dst’ or ’src’ are NULL
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Copies ’len’ bytes from string ’src’ to string ’dst’. The two strings
 * may overlap; the copy is always done in a non-destructive manner.
 * 
 * @param dst Pointer to the memory to copy to
 * @param src Pointer to the memory to copy from
 * @param len Number of bytes to copy
 * @retval ✔︎ Original value of ’dst’
 * @retval ✘ NULL, if ’dst’ or ’src’ are NULL
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief Searches for the first occurence of ’c’ in ’s’ within ’n’ bytes.
 * 
 * @param s String to search through
 * @param c Character to search for
 * @param n Number of bytes to search
 * @retval ✔︎ Pointer to the first occurence of ’c’ in ’s’ within ’n’ bytes
 * @retval ✘ NULL, if ’c’ could not be found
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares byte string ’s1’ against byte string ’s2’.
 * 
 * @param s1 First string
 * @param s2 Second string
 * @param n Assumed number of bytes the strings are long
 * @retval ✔︎ 0, if the two strings are identical or ’n’ is NULL
 * @retval ✘ Otherwise, the difference between the first two differing bytes
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Swaps the two pointers pointed to by ’a’ and ’b’.
 * 
 * @param a Pointer to a pointer
 * @param b Pointer to a pointer
 */
void	ft_swap_pointers(void **a, void **b);

/**
 * @brief Assigns the pointer ’new’ to the pointer pointed to by ’orig’.
 * Attempts to free the previous memory.
 * 
 * @param orig Pointer to a pointer
 * @param new Pointer
 */
void	ft_replace_ptr(void **orig, void *new);

/**
 * @brief Frees the NULL-terminated two dimensional array
 * 
 * @param array Array to free
 */
void	ft_free_2d_array(void **array);

#endif
