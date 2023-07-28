/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:55:16 by saeby             #+#    #+#             */
/*   Updated: 2023/07/28 16:51:46 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf.c
 * @author saeby
 * @version 1.0
 * @date 2023-07-28
*/
#include "libft.h"

/**
 * @fn int ft_printf(const char *input_str, ...)
 * Formats and prints its arguments after the first, which is the format string
 * The format string is composed of two types of characters :
 * - Plain characters are simply copied to stdout
 * - Escaped characters which are converted then copied to stdout
 * 
 * Formats always start with a % sign and are followed by one of :
 * - %, prints a % sign
 * - c, prints a char
 * - d, prints an int
 * - i, prints an int
 * - u, prints an unsgined int
 * - x, prints an hexadecimal number (lowercase letters)
 * - X, prints an hexadecimal number (uppercase letters)
 * - p, prints a pointer address
 * @param input_str input format string to be converted
 * @param ... arguments to replace the escaped chars in the format string
 * @return int
 * @retval number of characters printed to stdout
*/
static int	_check_format(const char *input_str, va_list *params, int i);

int	ft_printf(const char *input_str, ...)
{
	va_list	params;
	int		i;
	int		count;

	va_start(params, input_str);
	i = 0;
	count = 0;
	while (input_str[i])
	{
		if (input_str[i] == '%')
		{
			count += _check_format(input_str, &params, ++i);
			if (count < 0)
				return (-1);
		}
		else
		{
			count += ft_print_c(input_str[i]);
			if (count < 0)
				return (-1);
		}
		i++;
	}
	va_end(params);
	return (count);
}

static int	_check_format(const char *str, va_list *par, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_print_c((char) va_arg(*par, int));
	else if (str[i] == 's')
		count += ft_print_s((char *) va_arg(*par, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		count += ft_print_d((int) va_arg(*par, int));
	else if (str[i] == 'u')
		count += ft_print_u((unsigned int) va_arg(*par, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		count += ft_print_x((unsigned int) va_arg(*par, unsigned int), str[i]);
	else if (str[i] == 'p')
		count += ft_print_p((uintptr_t) va_arg(*par, uintptr_t));
	else if (str[i] == '%')
		count += ft_print_c('%');
	return (count);
}
