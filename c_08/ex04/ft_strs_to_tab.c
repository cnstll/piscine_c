/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 19:50:40 by calle             #+#    #+#             */
/*   Updated: 2020/07/20 16:07:25 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int				index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}

char				*ft_strdup(char *src)
{
	char			*dup;

	dup = malloc(sizeof(char) * (ft_strlen(src)) + 1);
	if (dup == NULL)
		return (0);
	return (ft_strcpy(dup, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab_of_str;

	if (!(tab_of_str = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab_of_str[i].size = ft_strlen(av[i]);
		tab_of_str[i].str = ft_strdup(av[i]);
		tab_of_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_of_str[i].str = 0;
	return (tab_of_str);
}
