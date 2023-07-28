/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:32:27 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 18:35:26 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_tolower.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn int ft_tolower(int c)
 * Returns the lowercase letter corresponding to the uppercase letter c
 * passed as parameter. If c isn't an uppercase letter, c is returned.
 * @param c character to make lowercase
 * @return int
 * @retval c if it isn't an uppercase letter
 * @retval lowercase letter corresponding to c if c is an uppercase letter
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
