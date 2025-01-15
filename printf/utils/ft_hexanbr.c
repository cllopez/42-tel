/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexanbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:01:04 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/15 16:53:13 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexanbr(va_list arg_ptr, int n)
{
	int nb;

	nb = va_arg(arg_ptr, int);
	if (n == 1)
	{
		while (nb >= 16)
			changebase(nb);
		write(1, &"0123456789abcdef"[nb % 16], 1);
	}
	else{
		while (nb >= 16)
		{
			changebase(nb, 16);
			write(1, &"0123456789ABCDEF"[nb % 16], 1);
		}
	}
}

int changebase(int n, int base)
{
	return (n / base);
}
