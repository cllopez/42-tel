/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:59:28 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/17 14:48:54 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		srclen;

	i = 0;
	j = 0;
	srclen = ft_strlen((char *)src);
	while (dst[i])
		i++;
	if (size <= i)
		return (size + srclen);
	while (src[j] && (j + i) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + srclen);
}

/* int main()
{
	char		dst[7] = "hey my\0";
	const char 	src[12] = "best friend\0";

	printf("dst %s\n", dst);
	size_t pru = ft_strlcat(dst, src, 10);
	printf("%zu", pru);
	printf("acata\n");
	return (0);
} */
