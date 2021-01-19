/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 20:51:50 by calle             #+#    #+#             */
/*   Updated: 2020/07/22 22:49:20 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_len(char *base)
{
	int				i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int					nbr_in_base(char nbr, char *base_from)
{
	int				i;

	i = 0;
	while (base_from[i])
	{
		if (nbr == base_from[i])
			return (i);
		i++;
	}
	return (-1);
}

int					ft_index(int *i, int *size, int nbr, int base_to_len)
{
	unsigned int	temp_nbr;

	*i = 0;
	if (nbr < 0)
	{
		temp_nbr = -nbr;
		(*i)++;
	}
	else
		temp_nbr = nbr;
	while (nbr != 0)
	{
		nbr /= base_to_len;
		(*i)++;
	}
	*size = *i;
	return (temp_nbr);
}
