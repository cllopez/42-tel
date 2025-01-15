/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:57:23 by cllopez-          #+#    #+#             */
/*   Updated: 2024/12/17 14:02:26 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(const char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	is_sign(const char c)
{
	return (c == '+' || c == '-');
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (is_space(*nptr))
		nptr++;
	if (is_sign(*nptr))
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) && nptr)
	{
		number = 10 * number + (*nptr - '0');
		nptr++;
	}
	return (sign * number);
}
/* 
#include <stdio.h>

int	main(){
	char nptr[] = "   -42abc";

	printf("%d", ft_atoi(nptr));

} */