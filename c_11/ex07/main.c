/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 17:34:19 by calle             #+#    #+#             */
/*   Updated: 2020/07/22 21:51:28 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

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

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 1 || argc == 0)
		return (0);
	else
	{
		
		ft_advanced_sort_string_tab(argv, ft_strcmp);
		i = 1;
		while (argv[i] && i < argc - 1)
		{
			ft_putstr(argv[i++]);
			ft_putstr("\n");
		}
	}
	return (0);
}
