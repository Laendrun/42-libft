/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:33:22 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:55:05 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isprint.c
 * @author saeby
 * @version 1.0
 * @date 2022-10-29
 */
#include "libft.h"

/**
 * @fn ft_isprint(int c)
 * Check if a character (converted to an int value) is printable.
 * @param c character to ckeck
 * @return int 
 * @retval 1 (true) if the character is printable
 * @retval 0 (false) if the character is not printable
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
