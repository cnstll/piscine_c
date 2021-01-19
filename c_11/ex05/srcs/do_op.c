/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:44:24 by calle             #+#    #+#             */
/*   Updated: 2020/07/23 16:32:53 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_operations.h"
#include "utilities.h"

int				ft_is_valid_operator(char arg)
{
	int			i;
	char		*signs;

	signs = "+-*/%";
	i = 0;
	while (signs[i])
	{
		if (signs[i] == arg)
			return (1);
		i++;
	}
	return (0);
}

int				ft_do_op(int num1, int num2, char sign)
{
	int			(*f[5])(int, int);
	char		*signs;
	int			index;

	signs = "+-*/%";
	index = 0;
	f[0] = add;
	f[1] = sub;
	f[2] = multp;
	f[3] = div;
	f[4] = mod;
	while (index < 5)
	{
		if (signs[index] == sign)
			return ((*f[index])(num1, num2));
		index++;
	}
	return (0);
}

int				main(int argc, char **argv)
{
	if (argc < 4 || argc >= 5)
		return (0);
	else if (argv[2][1] != '\0' || ft_is_valid_operator(argv[2][0]) == 0
			|| ft_strlen(argv[2]) > 2)
		ft_putstr("0\n");
	else if (ft_atoi(argv[3]) == 0 && argv[2][0] == '/')
		ft_putstr("Stop : division by zero\n");
	else if (ft_atoi(argv[3]) == 0 && argv[2][0] == '%')
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]));
		ft_putchar('\n');
	}
	return (0);
}
