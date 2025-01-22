/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:48:56 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/22 13:09:35 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
				ft_character(arg_ptr);
			else if (s[i] == 's')
				ft_string(arg_ptr);
			else if (s[i] == 'd' || s[i] == 'i')
				ft_putnbr(arg_ptr, 10, s[i]);
			else if (s[i] == 'u')
				ft_putnbr(arg_ptr, 10, s[i]);
			else if (s[i] == 'x')
				ft_putnbr(arg_ptr, 16, s[i]);
			else if (s[i] == 'X')
				ft_putnbr(arg_ptr, 16, s[i]);
			else if (s[i] == '%')
				write(1,"%", 1);
			
		}
		write(1, &s[i], 1);
		i++;
	}
	va_end(arg_ptr);
	return (i - 2 + );
}
int main() {
	// Test du format %c
	char caractere = 'A';
	ft_printf(" %c \n", caractere);
	printf(" %c \n\n", caractere);
	// Test du format %s
	char *chaine = NULL;
	ft_printf(" %s \n", chaine);
	printf(" %s \n\n", chaine);
	// Test du format %p
	int nombre = 0;
	ft_printf(" %p %p \n", NULL, (void *)&nombre);
	printf(" %p %p \n\n", NULL, (void *)&nombre);
	// Test du format %d
	int entier_decimal = 63;
	ft_printf(" %d \n", entier_decimal);
	printf(" %d \n\n", entier_decimal);
	// Test du format %i
	int entier_base10 = 67890;
	ft_printf(" %i \n", entier_base10);
	printf(" %i \n\n", entier_base10);
	// Test du format %u
	unsigned int entier_non_signe = -1;
	int result = 0;
	result = ft_printf(" %u ", entier_non_signe);
	printf("%d \n", result);
	result = 0;
	result = printf(" %u ", entier_non_signe);
	printf("%d \n\n", result);
	// Test du format %x
	int nombre_hex_min = -100;
	ft_printf(" %x \n", nombre_hex_min);
	printf(" %x \n\n", nombre_hex_min);
	// Test du format %X
	ft_printf(" %X \n", nombre_hex_min);
	printf(" %X \n\n", nombre_hex_min);
	// Test du pourcentage %%
	ft_printf(" %% \n");
	printf(" %% \n\n");
	return 0;
}