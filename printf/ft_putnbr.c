/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:53:02 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/30 13:51:40 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_int(va_list a)
{
	int total;
	int nb;

	total = 0;
	nb = va_arg(a, int);
	if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		nb *= -1;
		total++;
		if	(nb == -2147483648)
			return (11);
	}	
	else if (nb > 0)
	{
		total++;
		nb /= 10;
	}
	return (total);
}

static int	ft_aux_uint(va_list a)
{
	int				total;
	unsigned int	nb;

	total = 0;
	nb = va_arg(a, unsigned int);
	ft_putnbr_base(nb, "0123456789", 10);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		total++;
		nb = nb / 10;
	}
	return (total);
}

void	ft_wnbr_base(unsigned long num, char *base, int base_len)
{
	if (num >= (unsigned long)base_len)
		ft_putnbr_base(num / base_len, base, base_len);
	write(1, &base[num % base_len], 1);
}

static int	ft_hexbase(char c, va_list a)
{
	int	total;
	unsigned int	nb;

	total = 0;
	nb = va_arg(a, unsigned int);
	if	(c == 'x')
		ft_wnbr_base(nb, "0123456789abcdef", 16);
	if	(c == 'X')
		ft_wnbr_base(nb, "0123456789ABCDEF", 16);
	if	(nb < 0)
		nb = -nb;
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		total++;
		nb /= 16;
	}
	return (total);
}

int ft_type(char c, va_list a)
{
	int total;

	total = 0;
	if (c == 'i' || c == 'd')
		total += ft_int(a);
	else if	(c == 'u')
		total += ft_uint(a);
}
