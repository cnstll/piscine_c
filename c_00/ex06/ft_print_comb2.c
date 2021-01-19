/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 10:52:42 by calle             #+#    #+#             */
/*   Updated: 2020/07/02 13:52:30 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n2 = 0;
	while (n2 <= 98)
	{
		n1 = n2 + 1;
		while (n1 <= 99)
		{
			ft_putchar(n2 / 10 + '0');
			ft_putchar(n2 % 10 + '0');
			ft_putchar(32);
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			if (n2 != 98)
			{
				ft_putchar(44);
				ft_putchar(32);
			}
			n1++;
		}
		n2++;
	}
}
