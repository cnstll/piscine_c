/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:33:20 by calle             #+#    #+#             */
/*   Updated: 2020/07/14 09:02:52 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	if (nb > 0)
	{
		i = nb;
		while ((--i) > 0)
			nb = nb * i;
		return (nb);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
