/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printletters.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:08:57 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/18 15:11:47 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		print_char(str[i]);
		i++;
	}
	return (i);
}

int	print_percent(char c)
{
	print_char(c);
	return (1);
}
