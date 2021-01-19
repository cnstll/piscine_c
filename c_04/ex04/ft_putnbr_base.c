/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:45:22 by calle             #+#    #+#             */
/*   Updated: 2020/07/23 15:17:16 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

int					ft_base_valid(char *bse)
{
	int				i;
	int				j;

	i = 0;
	while (bse[i])
	{
		if (!bse[0] || !bse[1])
			return (0);
		if (bse[i] == '-' || bse[i] == '+')
			return (0);
		j = i + 1;
		while (bse[j])
		{
			if (bse[i] == bse[j++])
				return (0);
		}
		i++;
	}
	return (i);
}

unsigned int		ft_handle_negatives(int nbr)
{
	unsigned int	negative_nbr;

	negative_nbr = -nbr;
	ft_putchar('-');
	return (negative_nbr);
}

void				ft_putnbr_base(int nbr, char *base)
{
	int				bse;
	int				i;
	int				tab[40];
	unsigned int	t_nbr;

	i = -1;
	bse = ft_base_valid(base);
	if (bse == 0)
		return ;
	if (nbr < 0)
		t_nbr = ft_handle_negatives(nbr);
	else
		t_nbr = nbr;
	while (t_nbr != 0)
	{
		tab[++i] = t_nbr % bse;
		t_nbr = t_nbr / bse;
	}
	if (nbr == 0)
		tab[++i] = 0;
	while (bse > 0 && i > -1)
		ft_putchar(base[tab[i--] % bse]);
}
