/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:31:23 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/15 11:56:30 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	char	c;

	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}

int	print_base10(int nb)
{
	ft_putnbr_fd(nb, 1);
	return (ft_intlen(nb));
}

int print_unsigned10(int nb)
{
	ft_putunsignednbr_fd(nb, 1);
	return (ft_intlen(nb));
}
