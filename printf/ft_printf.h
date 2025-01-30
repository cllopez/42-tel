/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:38 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/30 11:55:22 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

int	ft_character(va_list arg_ptr);
size_t	ft_strlen(const char *c);
int	ft_putnbr(va_list arg_ptr, int base, char c);
int	ft_printf(char const *s, ...);
int	ft_putnbrbase(int nb, int base, char c);
void	ft_putstr_fd(char *s, int fd);

#endif