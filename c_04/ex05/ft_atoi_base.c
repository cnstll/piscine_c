/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 19:25:14 by calle             #+#    #+#             */
/*   Updated: 2020/07/23 15:07:20 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_base_with_repeat(char *bse)
{
	int			i;
	int			j;

	i = 0;
	while (bse[i] != '\0')
	{
		j = 0;
		while (bse[j] != '\0' && i != j)
		{
			if (bse[i] == bse[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int				ft_bv(char *bse)
{
	int			i;

	i = 0;
	while (bse[i])
	{
		if (!bse[0] || !bse[1])
			return (0);
		if (bse[i] == '-' || bse[i] == '+')
			return (0);
		if (bse[i] == '\v' || bse[i] == '\n' || bse[i] == '\t'
				|| bse[i] == '\f' || bse[i] == '\r' || bse[i] == ' ')
			return (0);
		if (ft_base_with_repeat(bse) == 0)
			return (0);
		else
			i++;
	}
	return (i);
}

int				ft_idx_bse(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (i);
}

int				ft_in_bse(char *base, char c)
{
	int			i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int				ft_atoi_base(char *str, char *base)
{
	int			sign;
	int			i;
	int			n;

	i = 0;
	sign = 1;
	n = 0;
	if (!ft_bv(base))
		return (0);
	while (((str[i] > 8 && str[i] < 14) || str[i] == 32))
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (ft_in_bse(base, str[i]) == 1)
	{
		if (ft_in_bse(base, str[i + 1]) == 1)
			n = (n + ft_idx_bse(base, str[i])) * ft_bv(base);
		else if (ft_in_bse(base, str[i + 1]) == 0)
			n = n + ft_idx_bse(base, str[i]);
		i++;
	}
	return (n * sign);
}
