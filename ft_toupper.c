/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:32:52 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 18:36:19 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_toupper.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn int ft_toupper(int c)
 * Returns the uppercase letter corresponding to the lowercase letter c
 * passed as parameter. If c isn't a lowercase letter, c is returned.
 * @param c character to make uppercase
 * @return int
 * @retval c if it isn't a lowercase letter
 * @retval uppercase letter corresponding to c if c is a lowercase letter
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
