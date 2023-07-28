/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:58:01 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 17:15:59 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_split.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn char **ft_split(const char *s, char c)
 * Splits the string s on the char c and returns an array of string pointers
 * @param s string to split
 * @param c char to split the string on
 * @return char**
 * @retval NULL terminated array of char*
*/
static int	count_words(const char *s, char c);
static char	*f_word(const char *str, size_t s, size_t e);

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	int		word;
	ssize_t	s_word;

	res = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	s_word = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)))
		{
			res[word++] = f_word(s, s_word, i);
			s_word = -1;
		}
		i++;
	}
	return (res);
}

static char	*f_word(const char *str, size_t s, size_t e)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_calloc((e - s + 1), sizeof(char));
	if (!word)
		return (NULL);
	while (s < e)
	{
		word[i++] = str[s++];
	}
	return (word);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && !trigger)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}
