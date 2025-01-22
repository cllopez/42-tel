/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:15:40 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/19 11:42:00 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *source, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	size_t	srclen;
	size_t	substrlen;

	if (!source)
		return (NULL);
	srclen = ft_strlen((char *)source);
	if (start >= srclen)
		return (ft_strdup(""));
	substrlen = srclen - start;
	if (substrlen > len)
		substrlen = len;
	res = (char *)malloc((substrlen + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (source[start + i] && i < len)
	{
		res[i] = source[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
