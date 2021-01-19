/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 17:01:17 by calle             #+#    #+#             */
/*   Updated: 2020/07/22 21:45:38 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_sort_string_tab(char **tab);

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

	ft_sort_string_tab(argv);
	i = 0;
	while (argv[i] && i < argc - 1)
	{	
		ft_putstr(argv[i++]);
		ft_putstr("\n");
	}
	return (0);	
}
