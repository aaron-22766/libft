/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:59:38 by arabenst          #+#    #+#             */
/*   Updated: 2023/04/03 13:19:45 by arabenst         ###   ########.fr       */
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

// DESCTIPTION
// Allocates space for ’count’ objects that are ’size’ bytes of memory.
// The allocated memory is filled with bytes of value zero.
// RETURN
// Success: Pointer to the allocated memory.
// Fail: NULL, if ’size’ = 0, ’size’ * ’count’ overflows, allocation fails.
void	*ft_calloc(size_t count, size_t size);

// DESCRIPTION
// Writes ’len’ bytes of value ’c’ (converted to an unsigned char)
// to the string ’b’.
// RETURN
// The string ’b’.
void	*ft_memset(void *b, int c, size_t len);

// DESCTIPTION
// Writes ’n’ zeroed bytes to the string ’s’. If ’n’ < 0, function does nothing.
void	ft_bzero(void *s, size_t n);

// DESCRIPTION
// Copies ’n’ bytes from memory area ’src’ to memory area ’dst’.
// If ’dst’ and ’src’ overlap, behavior is undefined, in which case
// ft_memmove should be used.
// RETURN
// Original value of ’dst’.
// NULL, if ’dst’ or ’src’ are NULL.
void	*ft_memcpy(void *dst, const void *src, size_t n);

// DESCRIPTION
// Copies ’len’ bytes from string ’src’ to string ’dst’. The two strings
// may overlap; the copy is always done in a non-destructive manner.
// RETURN
// Original value of ’dst’.
// NULL, if ’dst’ or ’src’ are NULL.
void	*ft_memmove(void *dst, const void *src, size_t len);

// RETURN
// Pointer to the first occurence of ’c’ in ’s’ within ’n’ bytes.
// NULL, if ’c’ is not contained.
void	*ft_memchr(const void *s, int c, size_t n);

// DESCRIPTION
// Compares byte string ’s1’ against byte string ’s2’.
// Both strings are assumed to be ’n’ bytes long
// RETURN
// 0, if ’n’ is NULL or the two strings are identical.
// Otherwise, the difference between the first two differing bytes.
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// DESCRIPTION
// Swaps the two pointers.
// (Call with ft_swap_pointers((void **)&a, (void **)&b) to swap strings)
void	ft_swap_pointers(void **a, void **b);

#endif
