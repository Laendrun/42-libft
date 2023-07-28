/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:31:08 by saeby             #+#    #+#             */
/*   Updated: 2023/07/26 17:03:43 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_bzero.c
 * @author saeby
 * @version 1.0
 * @date 2022-10-28
 */
#include "libft.h"

/**
 * @fn ft_bzero(void *s, size_t n)
 * The bzero() function writes n zeroed bytes to the string s.  
 * If n is zero, bzero() does nothing.
 * @brief Write zeroes to a byte string.
 * @param s strings to write zeroed bytes to
 * @param n number of bytes to be zeroed
 */
void	ft_bzero(void *s, size_t n)
{
	char	*str_ptr;

	str_ptr = (char *) s;
	while (n > 0)
	{
		*(str_ptr++) = 0;
		n--;
	}
}
