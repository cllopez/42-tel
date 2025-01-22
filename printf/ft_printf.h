/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:38 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/22 11:49:32 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

void	ft_putstr(char *s);
int	ft_character(va_list arg_ptr);
int	ft_string(va_list arg_ptr);
size_t	ft_strlen(const char *c);
void	ft_putnbr(va_list arg_ptr, int base, char c);
void	ft_unsign(va_list arg_ptr);
int	ft_printf(char const *s, ...);
int	ft_putnbrbase(int nb, int base, char c);


#endif