/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:58:57 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/19 12:52:42 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destino;
	const char	*source;

	source = (const char *)src;
	destino = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		destino[i] = source[i];
		i++;
	}
	return (dest);
}

/* int main(){
	char dest[20] = {0};
	char src[] = "hola mundo";

	printf("%s", (char *)ft_memcpy(dest, src, 4));
} */