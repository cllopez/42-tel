/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:14:56 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/19 11:47:35 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(ft_strlen((char *)s) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen((char *)s) + 1);
	return (str);
}
