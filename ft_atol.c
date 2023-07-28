/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:40:47 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:10:44 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_atol.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-26
*/
#include "libft.h"

static int	ft_isspace(int c);

/**
 * @fn long	ft_atol(const char *str)
 * The ft_atol() function converts the initial portion of the string
 * pointed to by str to long representation.
 * @brief Converts a string to a long.
 * @param str string to convert.
 * @return long
 * @retval long representation of the string
*/
long	ft_atol(const char *str)
{
	long	result;
	long	sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

static int	ft_isspace(int c)
{
	return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}
