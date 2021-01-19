/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:21:30 by calle             #+#    #+#             */
/*   Updated: 2020/07/22 21:38:05 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int ctr;

	i = 0;
	ctr = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			ctr++;
		i++;
	}
	return (ctr);
}