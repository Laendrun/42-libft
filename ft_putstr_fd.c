/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:23:25 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:13:06 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putstr_fd.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn void ft_putstr_fd(char *str, int fd)
 * Write the string str to the file descriptor fd
 * @param str string to write
 * @param fd file descriptor to write to
*/
void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}
