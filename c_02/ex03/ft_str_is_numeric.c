/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 10:11:23 by calle             #+#    #+#             */
/*   Updated: 2020/07/05 10:18:50 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int ctr;

	i = 0;
	ctr = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
