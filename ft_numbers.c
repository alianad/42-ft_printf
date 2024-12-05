/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:47:03 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/25 12:48:29 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_decimal(unsigned int n)
{
	unsigned long long	number;
	int					length;

	number = n;
	length = 0;
	if (number == 0)
		return (length += ft_character('0'));
	if (number > 9)
	{
		length += ft_unsigned_decimal(number / 10);
		length += ft_unsigned_decimal(number % 10);
	}
	else
		length += ft_character(number + '0');
	return (length);
}

int	ft_hexadecimal(unsigned int n, char c)
{
	unsigned long long	number;
	char				*base;
	char				buffer[20];
	int					length;
	int					i;

	number = n;
	length = 0;
	i = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (number == 0)
		return (length += ft_character('0'));
	while (number != 0)
	{
		buffer[i] = base[number % 16];
		number = number / 16;
		i++;
	}
	while (i--)
		length += ft_character(buffer[i]);
	return (length);
}

int	ft_number(int n)
{
	long long	number;
	int			length;

	number = n;
	length = 0;
	if (number < 0)
	{
		length += ft_character('-');
		number = -number;
	}
	if (number == 0)
		return (length += ft_character('0'));
	if (number > 9)
	{
		length += ft_number(number / 10);
		length += ft_number(number % 10);
	}
	else
		length += ft_character(number + '0');
	return (length);
}

int	ft_pointer(size_t pointer)
{
	char	*base;
	char	buffer[20];
	int		length;
	int		i;

	i = 0;
	length = 0;
	base = "0123456789abcdef";
	if (pointer == 0)
		return (length += ft_string("(nil)"));
	length += ft_string("0x");
	while (pointer != 0)
	{
		buffer[i] = base[pointer % 16];
		i++;
		pointer = pointer / 16;
	}
	while (i--)
		length += ft_character(buffer[i]);
	return (length);
}
