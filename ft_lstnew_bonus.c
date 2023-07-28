/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:30:40 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:11:50 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstnew_bonus.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-26
*/
#include "libft.h"

/**
 * @fn t_list *ft_lstnew(void *content)
 * Returns a new list element with the content passed as param.
 * @param content the content to add to the list element
 * @return t_list*
 * @retval pointer to a new list element
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
