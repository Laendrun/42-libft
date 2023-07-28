/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:36:55 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:32:56 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_striteri.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn void ft_striteri(char *s, void (*f)(unsigned int, char*))
 * Applies the function f to every character of the string s
 * @param s the string on wich to apply the function f to
 * @param f the function to apply to each characters of the string s
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
