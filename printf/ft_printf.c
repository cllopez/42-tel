/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:48:56 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/15 16:53:17 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printf(char const *s, ...)
{
	int	i;
	va_list arg_ptr;
	va_start(arg_ptr, s);

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
				ft_printcaracter(arg_ptr);
			else if (s[i] == 's')
				ft_string(arg_ptr);
			else if (s[i] == 'd' || s[i] == 'i')
				ft_putnbr(arg_ptr);
			else if (s[i] == 'u')
				ft_putnbr(arg_ptr);
			else if (s[i] == 'x')
				ft_hexanbr(arg_ptr, 1);
			else if (s[i] == 'X')
				ft_hexanbr(arg_ptr, 2);
			else if (s[i] == '%')
				write(1,'%', 1);
			
		}
		write(1, &s[i], 1);
		i++;
	}
	va_end(arg_ptr);
	return (i);
}

int	main()
{
	char const *str;

	str = "mati y allan putos %c";
	ft_printf(str, 'a');
	return (0);
	ft_printf ("hoal %s %d %u", "sdyfgwe", 45, 9);
}