/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:59:55 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:59:03 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putchar_fd.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn void ft_putchar_fd(char c, int fd)
 * Writes a single character c to the file descriptor fd
 * @param c character to write
 * @param fd file descriptor to write to
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
