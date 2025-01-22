/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:07:29 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/22 12:43:21 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_unsign(va_list arg_ptr)
{
	int	nb;

	nb = va_arg(arg_ptr, int);
	if (nb < 0)
		nb = -nb;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	write(1, &"0123456789"[nb % 10], 1);
}
