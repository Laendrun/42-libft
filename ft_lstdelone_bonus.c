/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:57:10 by saeby             #+#    #+#             */
/*   Updated: 2023/07/26 17:04:51 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstdelone_bonus.c
 * @author saeby
 * @version 1.0
 * @date 2022-10-29
 */
#include "libft.h"

/**
 * @fn void ft_lstdelone(t_list *lst, void (*del)(void *))
 * Deletes one element of the list passed as the first param
 * Frees the memory allocated for this list element
 * @param lst Pointer to the list element to delete
 * @param del Pointer to the function used to delete elements
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
