/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:53:02 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/30 11:48:39 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(va_list arg_ptr, int base, char c)
{
	int nb;
	int total;

	nb = va_arg(arg_ptr, int);
	total = 0;
	if (c == 'u')
	{
		nb = (unsigned int)nb;
		total += ft_putnbrbase(nb, base, c);
	}
	else
		total += ft_putnbrbase(nb, base, c);
	return(total);
}
