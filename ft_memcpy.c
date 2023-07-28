/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:10:22 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:28:32 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memcpy.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn void *ft_memcpy(void *dst, const void *src, size_t n)
 * Copies n bytes of the src pointer to the dst pointer
 * @param dst destination pointer to where the src is copied
 * @param src source pointer to where the content is currently stored
 * @param n max length to copy
 * @return void *
 * @retval pointer to dst
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp = (unsigned char *) dst;
	tmp2 = (unsigned char *) src;
	while (n > 0)
	{
		*(tmp++) = *(tmp2++);
		n--;
	}
	return (dst);
}
