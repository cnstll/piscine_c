/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:36:42 by calle             #+#    #+#             */
/*   Updated: 2020/07/14 21:18:31 by calle            ###   ########.fr       */
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

int			main(int argc, char *argv[])
{
	char	c;
	int		i;

	i = argc;
	c = '\n';
	while (i-- > 1)
	{
		ft_pustr(argv[i]);
		write(1, &c, 1);
	}
	return (0);
}
