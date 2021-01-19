/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 21:46:23 by calle             #+#    #+#             */
/*   Updated: 2020/07/05 10:09:21 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int ctr;

	i = 0;
	ctr = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] <= 91) || (str[i] > 96 && str[i] < 123))
		{
			ctr++;
		}
		else
		{
			ctr--;
		}
		i++;
	}
	if (ctr < i)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}