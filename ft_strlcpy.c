/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:34:15 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:46:36 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcpy.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

// https://opensource.apple.com/source/xnu/xnu-4570.1.46/osfmk/arm
// /strlcpy.c.auto.html

/**
 * @fn size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
 * Copies the string src to dst. It will copy at most dstsize - 1 characters.
 * It will then NULL terminate the result if dstsize is not 0.
 * Both dst and src have to be NULL terminated strings.
 * Room for the terminating NULL character should be included in dstsize.
 * ft_strlcpy will always return the length of the original src even if it
 * wasn't copied to dst.
 * @param dst destination pointer where src will be copied
 * @param src string to copy to dst
 * @param dstsize maximum size of src to copy into dst
 * @return size_t
 * @retval orignal length of src
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
	{
		ft_memcpy(dst, src, src_len + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}

// if -> dans le cas où il y a de la place pour terminer
// la string complète par NUL
// else if -> dans le cas ou il font tronquer la source 
// pour terminer la string par NUL