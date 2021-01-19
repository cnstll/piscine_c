/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utlities.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:48:22 by calle             #+#    #+#             */
/*   Updated: 2020/07/23 16:33:34 by calle            ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int sign;
	int nb;
	int i;

	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32 || str[i] == 43)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			nb = (nb + (int)(str[i]) % 48) * 10;
		else
			nb = nb + ((int)(str[i]) % 48);
		i++;
	}
	return (sign * nb);
}
