/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:06:25 by calle             #+#    #+#             */
/*   Updated: 2020/07/12 23:10:31 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pustr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(int argc, char *argv[])
{
	char c;

	c = '\n';
	(void)argc;
	ft_pustr(argv[0]);
	write(1, &c, 1);
	return (0);
}
