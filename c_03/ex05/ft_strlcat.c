/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:59:39 by calle             #+#    #+#             */
/*   Updated: 2020/07/12 16:35:56 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int							ft_strlen(char *str)
{
	int						i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int				ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int			i;
	unsigned int			j;
	unsigned int			d_size;
	unsigned int			s_size;

	s_size = ft_strlen(src);
	d_size = ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	if (size <= i)
		return (size + s_size);
	j = 0;
	while (size != 0 && src[j] != '\0' && (j < size - d_size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (s_size + d_size);
}
