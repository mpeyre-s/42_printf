/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:58:52 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/20 12:50:16 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexlen(unsigned int nb)
{
	int	result;

	result = 0;
	while (nb > 15)
	{
		result += hexlen(nb / 16);
		result++;
	}
	return (result + 1);
}

void	print_hexlower(unsigned int nb)
{
	char	c;
	char	*hex_base;

	hex_base = "0123456789abcdef";
	if (nb > 15)
		print_hexlower(nb / 16);
	c = hex_base[nb % 16];
	ft_putchar_fd(c, 1);
}

void	print_hexupper(unsigned int nb)
{
	char	c;
	char	*hex_base;

	hex_base = "0123456789ABCDEF";
	if (nb > 15)
		print_hexupper(nb / 16);
	c = hex_base[nb % 16];
	ft_putchar_fd(c, 1);
}

int	hexhub(unsigned int nb, char type)
{
	if (type == 'x')
	{
		print_hexlower(nb);
		return (hexlen(nb));
	}
	else if (type == 'X')
	{
		print_hexupper(nb);
		return (hexlen(nb));
	}
	return (0);
}
