/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:08:40 by saeby             #+#    #+#             */
/*   Updated: 2023/03/12 15:50:53 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//https://opensource.apple.com/source/Libc/Libc-997.1.1/
//string/strlcat.c.auto.html

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
