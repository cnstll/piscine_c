/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:47:21 by calle             #+#    #+#             */
/*   Updated: 2020/07/20 11:00:06 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					ft_ultimate_range(int **range, int min, int max)
{
	int				i;
	int				*tab;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * ((max) - min))))
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = i + min;
		i++;
	}
	*range = tab;
	return (i);
}
