/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:54:58 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:32:15 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memmove.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn void *ft_memmove(void *dst, const void *src, size_t len)
 * Copies len bytes from src to dst. The two strings may overlap.
 * The copy is always done in a non-destructive manner.
 * @param dst destination pointer to where the src is copied.
 * @param src source pointer to where the content is currently stored
 * @param len number of bytes to copy from src to dst.
 * @return void *
 * @retval NULL if either dst or src is NULL
 * @retval pointer to dst
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*uc_src;
	char	*uc_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	uc_src = (char *) src;
	uc_dst = (char *) dst;
	i = 0;
	if (uc_dst > uc_src)
		while (len-- > 0)
			uc_dst[len] = uc_src[len];
	else
	{
		while (i < len)
		{
			uc_dst[i] = uc_src[i];
			i++;
		}
	}
	return (dst);
}
