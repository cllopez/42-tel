/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:53:02 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/22 12:43:42 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr(va_list arg_ptr, int base, char c)
{
	int nb;

	nb = va_arg(arg_ptr, int);
	if (c == 'u')
	{
		nb = (unsigned int)nb;
		ft_putnbrbase(nb, base, c);
	}
	else
		ft_putnbrbase(nb, base, c);
}
