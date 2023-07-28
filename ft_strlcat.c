/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:08:40 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:45:25 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcat.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

//https://opensource.apple.com/source/Libc/Libc-997.1.1/
//string/strlcat.c.auto.html

/**
 * @fn size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
 * Appends the string src to the end of dst. It will append at most
 * dstsize - ft_strlen(dst) - 1 characters. It will then NULL terminate the
 * result, unless dstsize is 0 or the original dst was longer than dstsize.
 * Both dst and src have to be NULL terminated strings.
 * Room for the terminating NULL character should be included in dstsize.
 * ft_strlcat will always return the length of the string it tried to create
 * even if it didn't create it.
 * @param dst destination pointer, src will be appended to the end of dst
 * @param src string to append at the end of dst
 * @param dstsize maximum size of src to append to dst
 * @return size_t
 * @retval orignal length of src + orginal length of dst
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			src_len;
	size_t			dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strnlen(dst, dstsize);
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}

/*
	if (dst_len == dstsize)
		-> do not concat anything as there's not enough room
	if (src_len < dstsize - dst_len)
		-> if there's room for the whole src string
	else
		-> if there's not enough room for the whole src string
		-> concat the start of src then NUL terminate
	}
*/
