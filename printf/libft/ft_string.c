/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:35:06 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/22 12:44:41 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_string(va_list arg_ptr)
{
	char	*s;

    s = va_arg(arg_ptr, char *);

	ft_putstr(s);
	return(ft_strlen(s));
}
