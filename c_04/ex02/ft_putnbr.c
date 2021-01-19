/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:58:48 by calle             #+#    #+#             */
/*   Updated: 2020/07/07 14:59:14 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int unsnb;

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
