/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:20:22 by calle             #+#    #+#             */
/*   Updated: 2020/07/22 22:00:32 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] > s2[i] || (s1[i] && !s2[i]))
		return (1);
	else if (s1[i] < s2[i] || (!s1[i] && s2[i]))
		return (-1);
	else
		return (0);
}

void		ft_sort_string_tab(char **tab)
{
	int		j;
	char	*temp;
	int		stop;

	stop = 1;
	while (stop != 0 && tab[0])
	{
		j = 0;
		while (tab[j + 1] != 0)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) == 1)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				stop++;
			}
			j++;
		}
		stop--;
	}
}
