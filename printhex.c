/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:58:52 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/20 11:54:23 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexlen(unsigned int nb)
{
	int	result;

	result = 0;
	if (nb == -2147483648)
		return (8);
	if (nb < 0)
	{
		result++;
		nb = -nb;
	}
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
	if (nb == -2147483648)
	{
		ft_putstr_fd("-80000000", 1);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', 1);
	}
	while (nb > 15)
		print_hexlower(nb / 16);
	c = hex_base[nb % 16];
	ft_putchar_fd(c, 1);
}

void	print_hexupper(unsigned int nb)
{
	char	c;
	char	*hex_base;

	hex_base = "0123456789ABCDEF";
	if (nb == -2147483648)
	{
		ft_putstr_fd("-80000000", 1);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', 1);
	}
	while (nb > 15)
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
