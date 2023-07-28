/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:16:29 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:10:12 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memccpy.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn void *ft_memccpy(void *dst, const void *src, int c, size_t n)
 * Copies n bytes of the src pointer to the dst pointer
 * or stops when c (casted as unsigned char) is copied to dst
 * @param dst destination pointer to where the src is copied
 * @param src source pointer to where the content is currently stored
 * @param c stopping character
 * @param n max length to copy if c is not encountered
 * @return void *
 * @retval pointer to the byte after c if c is encountered
 * @retval NULL if c is not encountered, n bytes will be copied
*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char *) dst;
	tmp2 = (unsigned char *) src;
	while (n > 0)
	{
		if (*(tmp2) == c)
		{
			*(tmp++) = *(tmp2++);
			*(tmp) += 1;
			return (tmp);
		}
		*(tmp++) = *(tmp2++);
		n--;
	}
	return (NULL);
}
