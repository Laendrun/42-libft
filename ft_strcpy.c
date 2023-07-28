/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:18:12 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:26:20 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strcpy.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn char *ft_strcpy(char *dst, const char *src)
 * Copies string src to the destination dst. Both string are assumed to be 
 * the same length. dst should have enough place to hold src.
 * @param dst destingation pointer to where the src is copied
 * @param src source pointer to where the content is currently stored
 * @return char*
 * @retval pointer to dst
*/
char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
