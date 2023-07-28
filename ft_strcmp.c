/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:48:24 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:24:18 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strcmp.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn int ft_strcmp(const char *s1, const char *s2)
 * Compares the string s1 against the string s2. Both strings have to be
 * NULL terminated.
 * @param s1 first string
 * @param s2 second string
 * @return int
 * @retval 0 if both strings are identical
 * @retval difference between the first two differing characters
*/
int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
