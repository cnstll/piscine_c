/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 17:32:28 by calle             #+#    #+#             */
/*   Updated: 2020/07/22 21:59:32 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		j;
	char	*temp;
	int		i;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if ((*cmp)(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
