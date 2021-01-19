/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 11:47:54 by calle             #+#    #+#             */
/*   Updated: 2020/07/20 20:08:09 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putstr(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void				ft_putnbr(int nb)
{
	unsigned int	unsnb;

	if (nb < 0)
	{
		unsnb = -nb;
		ft_putchar('-');
	}
	else
	{
		unsnb = nb;
	}
	if (unsnb < 10)
	{
		ft_putchar(unsnb + '0');
	}
	else
	{
		ft_putnbr(unsnb / 10);
		ft_putnbr(unsnb % 10);
	}
}

void				ft_show_tab(struct s_stock_str *par)
{
	int				i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
