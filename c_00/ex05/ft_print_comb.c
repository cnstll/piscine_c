/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 20:24:17 by calle             #+#    #+#             */
/*   Updated: 2020/07/02 12:55:40 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int i, int w, int j)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(w + '0');
	if (i != 7)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int w;

	i = 0;
	while (i <= 7)
	{
		j = 1;
		while (j <= 9)
		{
			w = 2;
			while (w <= 9)
			{
				if (i < j && j < w && i < w)
				{
					ft_print_numbers(i, w, j);
				}
				w++;
			}
			j++;
		}
		i++;
	}
}
