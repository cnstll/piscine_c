/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 20:37:54 by calle             #+#    #+#             */
/*   Updated: 2020/07/07 20:36:00 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexadec(unsigned char c)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	if (c >= 16)
	{
		ft_putchar(hex[c / 16]);
		ft_putchar(hex[c % 16]);
	}
	else if (c < 16)
	{
		ft_putchar('0');
		ft_putchar(hex[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_print_hexadec((unsigned char)(str[i]));
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
