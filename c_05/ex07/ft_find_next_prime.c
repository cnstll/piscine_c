/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:52:39 by calle             #+#    #+#             */
/*   Updated: 2020/07/14 10:04:09 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2)
		return (1);
	while (i <= nb / 2 && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
