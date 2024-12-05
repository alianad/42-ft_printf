/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:25:45 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/25 12:46:58 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list(*args), char c)
{
	int	length;

	length = 0;
	if (c == '%')
		length += ft_character('%');
	else if (c == 'c')
		length += ft_character(va_arg(*args, int));
	else if (c == 's')
		length += ft_string(va_arg(*args, char *));
	else if (c == 'p')
		length += ft_pointer(va_arg(*args, size_t));
	else if (c == 'd' || c == 'i')
		length += ft_number(va_arg(*args, int));
	else if (c == 'x' || c == 'X')
		length += ft_hexadecimal(va_arg(*args, unsigned int), c);
	else if (c == 'u')
		length += ft_unsigned_decimal(va_arg(*args, unsigned int));
	return (length);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		length;
	int		i;

	va_start(args, string);
	length = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			length += ft_format(&args, string[i]);
		}
		else
			length += ft_character(string[i]);
		i++;
	}
	va_end(args);
	return (length);
}
