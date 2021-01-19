/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:38:17 by calle             #+#    #+#             */
/*   Updated: 2020/07/23 12:24:49 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int n;
	int p;

	n = 0;
	p = 0;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			n++;
		if ((*f)(tab[i], tab[i + 1]) > 0)
			p++;
		i++;
	}
	if (n != 0 && p != 0)
		return (0);
	else
		return (1);
}
