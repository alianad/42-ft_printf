/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:26:33 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/25 12:46:39 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_number(int n);
int	ft_character(int c);
int	ft_string(const char *s);
int	ft_pointer(size_t pointer);
int	ft_printf(const char *string, ...);
int	ft_unsigned_decimal(unsigned int n);
int	ft_hexadecimal(unsigned int n, char c);

#endif
