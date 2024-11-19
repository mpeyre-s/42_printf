/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:40:46 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/19 16:21:37 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
int		printhub(char type, va_list parameters);

int		print_char(int c);
int		print_string(char *str);
int		print_percent(char c);

int		print_base10(int nb);
int		print_unsigned10(unsigned int nb);

int		print_hex(void *ptr);

int		hexhub(int nb, char type);
void	print_hexlower(int nb);
void	print_hexlower(int nb);

#endif
