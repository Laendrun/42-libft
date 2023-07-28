/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:15:03 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:23:32 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstsize_bonus.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-26
*/
#include "libft.h"

/**
 * @fn int ft_lstsize(t_list *lst)
 * Counts the number of element in the list given as parameter
 * @param lst pointer to the first element of the list to count
 * the number of elements of
 * @return int
 * @retval the number of elements in the list
*/
int	ft_lstsize(t_list *lst)
{
	t_list			*tmp;
	int				i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
