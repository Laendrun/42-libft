/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:29:40 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:13:44 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putstr.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn void ft_putstr(char *str)
 * Writes the string str to stdout
 * @param str string to write
*/
void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
