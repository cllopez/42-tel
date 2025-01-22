/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:12:54 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/17 15:06:11 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = s;
	i = 0;
	while (i < n)
	{
		aux[i] = c;
		i++;
	}
	return (s);
}
