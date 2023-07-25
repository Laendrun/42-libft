/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:33:22 by saeby             #+#    #+#             */
/*   Updated: 2023/03/12 15:02:04 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isprint.c
 * @author saeby (saeby@42lausanne.ch)
 * @version 1.0
 * @date 2022-10-29
 */
#include "libft.h"

/**
 * @fn int ft_isprintf(int c)
 * Check if a character (converted to an int value) is printable.
 * @brief Check if a character is printable.
 * @param c character to ckeck
 * @return int 
 * @retval 1 (true) if the character is alphabetical
 * @retval 0 (false) if the character is not alphabetical
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
