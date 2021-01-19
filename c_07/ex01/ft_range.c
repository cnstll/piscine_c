/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:50:05 by calle             #+#    #+#             */
/*   Updated: 2020/07/19 15:31:02 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (max <= min)
	{
		tab = NULL;
		return (tab);
	}
	if (!(tab = malloc(sizeof(int) * ((max) - min))))
		return (0);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}
