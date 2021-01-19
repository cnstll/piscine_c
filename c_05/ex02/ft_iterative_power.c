/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:51:02 by calle             #+#    #+#             */
/*   Updated: 2020/07/14 09:08:50 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int t;

	i = 0;
	t = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while (++i < power)
			nb *= t;
	return (nb);
}
