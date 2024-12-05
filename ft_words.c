/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:39:31 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/25 12:43:25 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(const char *s)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i] != '\0')
	{
		length += ft_character(s[i]);
		i++;
	}
	return (length);
}

int	ft_character(int c)
{
	write(1, &c, 1);
	return (1);
}
