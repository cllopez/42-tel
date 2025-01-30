/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:58:32 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/30 12:17:34 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase(int nb, int base, char c)
{
	static int total;

	if (!total)
		total = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}	
	if (nb < 0 && base == 10)
	{
		write(1, "-", 1);
		nb = -nb;
		total++;
	}
	if (nb >= base)
		ft_putnbrbase(nb / base, base, c);
	total++;
	if (c == 'x')
		write(1, &"0123456789abcdef"[nb % base], 1);
	else
		write(1, &"0123456789ABCDEF"[nb % base], 1);
	return(total);
}
