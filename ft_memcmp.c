/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:51:57 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:22:39 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memcmp.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn int ft_memcmp(const void *s1, const void *s2, size_t n)
 * Compares byte string s1 against byte string s2. 
 * Both string are assumed to be n bytes long
 * @param s1 first byte string
 * @param s2 second byte string
 * @param n length of both byte strings
 * @return int
 * @retval 0 if both strign are identical
 * @retval difference between the first two differing bytes
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
