/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:40:48 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 18:16:34 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strnlen.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn size_t ft_strnlen(const char *s, size_t maxlen)
 * Returns the length of the string s, at most maxlen
 * @param s string to calculate the length of
 * @param maxlen maximum length to be returned by ft_strnlen
 * @return size_t
 * @retval maxlen if the string is longer or equal to maxlen
 * @retval length of the string if the string is less than maxlen
*/
size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}
