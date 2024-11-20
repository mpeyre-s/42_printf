/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:58:52 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/20 12:38:22 by mathispeyre      ###   ########.fr       */
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
	char	buffer[9];
	int		i;

	hex_base = "0123456789abcdef";
	i = 8;
	buffer[i] = '\0';
	while (nb > 15)
	{
		buffer[--i] = hex_base[nb % 16];
		nb /= 16;
	}
	buffer[--i] = hex_base[nb % 16];
	while (buffer[i])
		ft_putchar_fd(buffer[i++], 1);
}

void	print_hexupper(unsigned int nb)
{
	char	c;
	char	*hex_base;
	char	buffer[9];
	int		i;

	hex_base = "0123456789ABCDEF";
	i = 8;
	buffer[i] = '\0';
	while (nb > 15)
	{
		buffer[--i] = hex_base[nb % 16];
		nb /= 16;
	}
	buffer[--i] = hex_base[nb % 16];
	while (buffer[i])
		ft_putchar_fd(buffer[i++], 1);
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
