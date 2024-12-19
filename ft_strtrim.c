/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:54:12 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/19 16:37:34 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t		start;
	size_t		end;

	if (!set || !s1)
		return (0);
	len = ft_strlen(s1);
	start = 0;
	while (start <= len / 2 && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1);
	while (end >= len / 2 && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (start > end)
		return (ft_strdup(""));
	len = end - start;
	return (ft_substr(s1, start, end + 1));
}
