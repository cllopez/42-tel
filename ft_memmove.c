/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:37:07 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/17 13:42:47 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((char *)dest)[n] = ((const char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* int main(){
	char dest[20] = "inicializando";
	char src[] = "hola mundo";
	char buffer[] = "ABCDEFGHIJ";
	printf("%s", (char *)ft_memmove(dest, src, 2));
} */