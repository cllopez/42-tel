/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcaracter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:08 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/15 14:48:29 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_character(va_list arg_ptr)
{
	char s;

	s = va_arg(arg_ptr, char);
	write(1, &s, 1);
	return(1);
}
