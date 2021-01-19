/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:42:27 by calle             #+#    #+#             */
/*   Updated: 2020/07/23 14:50:07 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					ft_len(char *base);
int					nbr_in_base(char nbr, char *base_from);
int					ft_index(int *i, int *size, int nbr, int base_to_len);

int					check_base(char *bse)
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
		if (bse[i] == '\v' || bse[i] == '\n' || bse[i] == '\t'
				|| bse[i] == '\f' || bse[i] == '\r' || bse[i] == ' ')
			return (0);
		j = i + 1;
		while (bse[j])
		{
			if (bse[i] == bse[j++])
				return (0);
		}
		i++;
	}
	return (1);
}

char				*rev_tab(int size, char *tab)
{
	int				i;
	char			*rev_tab;

	i = size;
	if (!(rev_tab = malloc(sizeof(char) * (i + 1))))
		return (0);
	while (i > 0)
	{
		rev_tab[size - i] = tab[i - 1];
		i--;
	}
	rev_tab[size] = '\0';
	return (rev_tab);
}

char				*from_dec_to_base(int nbr, int base_to_len, char *base_to)
{
	char			*tab;
	int				i;
	int				size;
	unsigned int	temp_nbr;

	size = 0;
	temp_nbr = ft_index(&i, &size, nbr, base_to_len);
	if (!(tab = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (temp_nbr != 0)
	{
		tab[i] = base_to[temp_nbr % base_to_len];
		temp_nbr /= base_to_len;
		i++;
	}
	if (nbr < 0)
		tab[i] = '-';
	if (nbr == 0)
	{
		tab[0] = base_to[0];
		size += 1;
	}
	return (rev_tab(size, tab));
}

char				*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				i;
	int				sign;
	unsigned int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	if (ft_len(base_from) == 0 || ft_len(base_to) == 0)
		return (0);
	while (nbr[i] == '\v' || nbr[i] == '\n' || nbr[i] == '\t'
			|| nbr[i] == '\f' || nbr[i] == '\r' || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i++] == '-')
			sign *= -1;
	}
	while (nbr_in_base(nbr[i], base_from) != -1)
	{
		res *= ft_len(base_from);
		res += nbr_in_base(nbr[i++], base_from);
	}
	return (from_dec_to_base(res * sign, ft_len(base_to), base_to));
}
