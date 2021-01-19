/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:47:32 by calle             #+#    #+#             */
/*   Updated: 2020/07/20 11:01:45 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_malloc_str(int size, char **strs, char *sep)
{
	int		len;
	char	*dest;
	int		i;

	i = 0;
	len = 0;
	if (size <= 0)
	{
		if (!(dest = malloc(sizeof(char) * 1)))
			return (0);
		dest[0] = '\0';
		return (dest);
	}
	else
	{
		i = -1;
		len = 0;
		while (++i < size)
			len = len + ft_strlen(strs[i]);
		if (!(dest = malloc(sizeof(char) * len + ft_strlen(sep) * (size - 1))))
			return (0);
		return (dest);
	}
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		p;
	char	*dest;

	if (!(dest = ft_malloc_str(size, strs, sep)))
		return (NULL);
	i = 0;
	p = 0;
	while (i < size && size > 0)
	{
		j = 0;
		while (strs[i][j])
			dest[p++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			dest[p++] = sep[j++];
		i++;
	}
	if (size > 0)
		dest[p] = '\0';
	return (dest);
}
