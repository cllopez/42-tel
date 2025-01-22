/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:16:55 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/17 13:38:44 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		total_len;
	int		i;
	int		j;

	total_len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc((total_len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/* int main(){
	const char *cadena1 = "hola, ";
	const char *cadena2 = "mundo";
	char *resultado = ft_strjoin(cadena1,cadena2);

	printf("%s", resultado);
	free(resultado);
} */