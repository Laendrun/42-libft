/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:50:54 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:22:52 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memchr.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

// https://opensource.apple.com/source/xnu/xnu-2782.30.5/bsd/libkern/memchr.c

/**
 * @fn void *ft_memchr(const void *s, int c, size_t n)
 * Search for c (casted as unsigned char) in the
 * string s (casted as unsigned char) in the first n bytes of s
 * @param s string in which to search
 * @param c char to search for
 * @param n max bytes to search in
 * @return void *
 * @retval pointer to the byte c if located in the string
 * @retval NULL pointer if byte c is not found
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
