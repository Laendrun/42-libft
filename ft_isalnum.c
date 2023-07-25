/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:33:51 by saeby             #+#    #+#             */
/*   Updated: 2023/03/12 15:01:49 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isalnum.c
 * @author saeby (saeby@42lausanne.ch)
 * @version 1.0
 * @date 2022-10-28
 */
#include "libft.h"

/**
 * @fn ft_isalnum(int c)
 * Check if a character (converted to an int value) is alphanumerical.
 * @brief Check if a character is alphanumerical
 * @param c character to ckeck
 * @return int 
 * @retval 1 (true) if the character is alphanumerical
 * @retval 0 (false) if the character is not alphanumerical
 */
int	ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || \
		(c >= 97 && c <= 122));
}
