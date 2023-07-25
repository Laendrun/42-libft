/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:26:34 by saeby             #+#    #+#             */
/*   Updated: 2023/03/12 15:03:31 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isascii.c
 * @author saeby (saeby@42lausanne.ch)
 * @version 1.0
 * @date 2022-10-29
 */
#include "libft.h"

/**
 * @fn int	ft_isascii(int c)
 * Check if a character (converted to an int value) is alphabetical.
 * @brief Check if a character is alphabetical.
 * @param c character to ckeck
 * @return int
 * @retval 1 (true) if the character is alphabetical
 * @retval 0 (false) if the character is not alphabetical
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
