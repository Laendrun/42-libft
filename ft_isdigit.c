/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:27:43 by saeby             #+#    #+#             */
/*   Updated: 2023/07/26 17:04:19 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isdigit.c
 * @author saeby
 * @version 1.0
 * @date 2022-10-29
 */
#include "libft.h"

/**
 * @fn int	ft_isdigit(int c)
 * Check if a character (converted to an int value) is numeric.
 * @brief Check if a character is numeric.
 * @param c character to ckeck
 * @return int
 * @retval 1 (true) if the character is alphabetical
 * @retval 0 (false) if the character is not alphabetical
 */
int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
