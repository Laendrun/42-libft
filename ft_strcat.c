/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:11:33 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:19:07 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strcat.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn char *ft_strcat(char *s1, const char *s2)
 * Appends a copy of the NULL terminated string s2 to the end of the NULL
 * terminated string s1 then adds a terminating '\0'. String s1 must have
 * enough room to hold the result
 * @param s1 string to which s2 will be appended
 * @param s2 string to append to s1
 * @return char*
 * @retval pointer to s1
*/
char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = 0;
	return (s1);
}
