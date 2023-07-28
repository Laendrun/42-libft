/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:58:00 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:38:40 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_pow.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn int ft_pow(int nb, int power)
 * Calculates nb ^ power. The function doesn't check for surpassing MAX_INT.
 * @param nb number to take multiply
 * @param power power at which to take nb
 * @return int
 * @retval nb^power
*/
int	ft_pow(int nb, int power)
{
	if (power != 0 && power >= 0)
		return (nb * (ft_pow(nb, power - 1)));
	else if (power < 0)
		return (0);
	else
		return (1);
}
