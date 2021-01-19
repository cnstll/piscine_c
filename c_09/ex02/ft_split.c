/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:18:51 by calle             #+#    #+#             */
/*   Updated: 2020/07/21 16:22:11 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int g_j;
int g_i;
int g_prev;
int g_l;

int			ft_is_charset(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int			ft_malloc_sub_str(char **strs, char *str, char *charset, int ctr)
{
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = 1;
	while (j < ctr && ctr != 0 && str[i])
	{
		if (!ft_is_charset(str[i], charset)
		&& (ft_is_charset(str[i + 1], charset) || !str[i + 1]))
		{
			strs[j] = malloc(sizeof(char) * (l + 1));
			l = 1;
			j++;
		}
		if (!ft_is_charset(str[i++], charset))
			l++;
		else
			l = 1;
	}
	strs[j] = 0;
	return (j);
}

void		ft_strs_insert(char **strs, char *str, char *charset, int ctr)
{
	g_j = 0;
	g_i = 0;
	g_prev = 0;
	while (g_j < ctr)
	{
		g_l = 0;
		while (str[g_i] && g_l != -1)
		{
			if (!ft_is_charset(str[g_i], charset))
			{
				strs[g_j][g_l] = str[g_i];
				g_l++;
				g_prev++;
			}
			if (ft_is_charset(str[g_i], charset) || str[g_i + 1] == '\0')
			{
				if (!(ft_is_charset(str[g_i - 1], charset)))
					strs[g_j][g_l] = '\0';
				g_l = -1;
			}
			g_i++;
		}
		if (!ft_is_charset(str[g_i], charset) && g_prev != 0)
			g_j++;
	}
}

char		**ft_split(char *str, char *charset)
{
	char	**strs;
	int		ctr;
	int		i;

	i = 0;
	ctr = 0;
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset)
				&& ft_is_charset(str[i + 1], charset))
			ctr++;
		if (!ft_is_charset(str[i], charset) && str[i + 1] == '\0')
			ctr++;
		i++;
	}
	if (!(strs = malloc(sizeof(char*) * (ctr + 1))))
		return (0);
	ft_malloc_sub_str(strs, str, charset, ctr);
	if (ctr > 0)
		ft_strs_insert(strs, str, charset, ctr);
	return (strs);
}
