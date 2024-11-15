/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:40:46 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/15 11:50:03 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	printhub(char type, va_list parameters);

int	print_char(char c);
int	print_string(char *str);
int	print_percent(char c);

int	print_base10(int nb);
int	print_unsigned10(int nb);

#endif
