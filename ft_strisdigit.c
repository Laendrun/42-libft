/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:35:31 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:29:30 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strisdigit.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn int ft_strisdigit(char *str)
 * Checks if the whole string str is composed of digits
 * @param str string to check
 * @return int
 * @retval 1 (true) if the whole string is composed of digits
 * @retval 0 (false) if the whole string is not composed of only digits
*/
int	ft_strisdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
