/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:08 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/30 14:35:49 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_character(va_list arg_ptr)
{
	char	s;

	s = va_arg(arg_ptr, int);
	write(1, &s, 1);
	return (1);
}

int	ft_string(va_list arg_ptr)
{
	char	*s;

	s = va_arg(arg_ptr, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_adress(va_list a)
{
	int				total;
	unsigned long	nb;

	total = 2;
	nb = (unsigned long)va_arg(a, void *);
	if (nb == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	ft_write_base(nb, "0123456789abcdef", 16);
	while (nb > 0)
	{
		total++;
		nb /= 16;
	}
	return (total);
}
