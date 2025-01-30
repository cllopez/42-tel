/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllopez- <cllopez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:30:45 by cllopez-          #+#    #+#             */
/*   Updated: 2025/01/30 14:32:14 by cllopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_character(va_list arg_ptr);
size_t	ft_strlen(const char *c);
int		ft_string(va_list arg_ptr);
int		ft_adress(va_list a);
int		ft_int(va_list a);
int		ft_uint(va_list a);
void	ft_write_base(unsigned long num, char *base, int base_len);
int		ft_hexbase(char c, va_list a);
int		ft_printf(char const *s, ...);

#endif