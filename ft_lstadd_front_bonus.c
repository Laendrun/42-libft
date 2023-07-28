/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:51:04 by saeby             #+#    #+#             */
/*   Updated: 2023/07/26 17:04:37 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_front_bonus.c
 * @author saeby
 * @version 1.0
 * @date 2022-10-29
 */
#include "libft.h"

/**
 * @fn void ft_lstadd_front(t_list **alst, t_list *new)
 * Adds a new element at the front of the chained list **alst.
 * @param alst Adress of the first element of the list (&list)
 * @param new Pointer to the element to be added to the list (element)
 */
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
