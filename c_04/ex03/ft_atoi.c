/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:00:13 by calle             #+#    #+#             */
/*   Updated: 2020/07/09 09:49:28 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int sign;
	int nb;
	int i;

	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32 || str[i] == 43)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			nb = (nb + (int)(str[i]) % 48) * 10;
		else
			nb = nb + ((int)(str[i]) % 48);
		i++;
	}
	return (sign * nb);
}
