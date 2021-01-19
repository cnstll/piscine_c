/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 18:51:51 by calle             #+#    #+#             */
/*   Updated: 2020/07/06 16:30:15 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				srclgth;

	srclgth = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclgth);
}
