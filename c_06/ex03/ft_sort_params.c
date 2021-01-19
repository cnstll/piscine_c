/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:44:21 by calle             #+#    #+#             */
/*   Updated: 2020/07/13 22:24:41 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_pustr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void		ft_print_params(int argc, char **argv)
{
	int		i;

	i = 0;
	while (++i < argc)
	{
		ft_pustr(argv[i]);
		write(1, "\n", 1);
	}
}

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

int			main(int argc, char *argv[])
{
	int		j;
	char	*temp;
	int		stop;

	stop = 1;
	while (stop != 0)
	{
		j = 1;
		while (j < argc - 1 && argc > 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) == 1)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
				stop++;
			}
			j++;
		}
		stop--;
	}
	if (argc > 1)
		ft_print_params(argc, argv);
	return (0);
}
