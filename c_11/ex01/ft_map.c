/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:27:07 by calle             #+#    #+#             */
/*   Updated: 2020/07/22 21:30:26 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_tabdup(int *tab, int size)
{
	int		*dup;
	int		index;

	if (!(dup = malloc(sizeof(int) * (size + 1))))
		return (0);
	index = 0;
	while (index < size)
	{
		dup[index] = tab[index];
		index++;
	}
	return (dup);
}

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab_c;

	tab_c = ft_tabdup(tab, length);
	i = 0;
	while (i < length)
	{
		tab_c[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_c);
}
