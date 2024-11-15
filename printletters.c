/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printletters.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:08:57 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/15 11:09:57 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	print_percent(char c)
{
	write(1, &c, 1);
	return (1);
}
