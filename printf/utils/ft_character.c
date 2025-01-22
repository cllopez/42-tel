/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:08 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/22 12:46:14 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_character(va_list arg_ptr)
{
	char s;

	s = va_arg(arg_ptr, int);
	write(1, &s, 1);
	return(1);
}
