/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:44:30 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 18:25:18 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strstr.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn char *ft_strstr(const char *haystack, const char *needle)
 * Searches for the first occurence of the string needle in 
 * the string haystack.
 * @param haystack string in which to search for the needle
 * @param needle string to search in the haystack
 * @return char*
 * @retval NULL if the needle is not found in haystack
 * @retval pointer to the first character of needle in the haystack
*/
char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i_str;
	unsigned int	j;

	i_str = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i_str] != '\0')
	{
		while (haystack[i_str + j] == needle[j] && haystack[i_str + j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i_str);
		}
		i_str++;
		j = 0;
	}
	return (0);
}
