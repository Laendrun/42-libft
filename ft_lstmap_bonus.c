/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:05:02 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:11:37 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstmap_bonus.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-26
*/
#include "libft.h"

/**
 * @fn t_list *ft_lstmap(t_lst *lst, void *(*f)(void *), void (*del)(void *))
 * Creates a new list resulting of the application of the function *f
 * on the content of each elements of the list lst
 * @param lst the list from which the base values will be taken
 * @param f the function to apply to the content of each element of lst
 * @param del a function that is used to delete and free a list element
 * @return t_list*
 * @retval pointer to the first element of the new list
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}
