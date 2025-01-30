/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:35:06 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/30 12:04:18 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_string(va_list arg_ptr)
{
	char	*s;

    s = va_arg(arg_ptr, char *);
	if (!s)
		{
			write(1, "(null)", 6);
			return (6);
		}
	write(1, s, ft_strlen(s));
	return(ft_strlen(s));
}
