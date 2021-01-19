/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 21:14:42 by calle             #+#    #+#             */
/*   Updated: 2020/07/06 15:17:59 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned int ctr;

	ctr = 0;
	index = 0;
	while (index < n)
	{
		if (ctr != 1 && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		else
		{
			dest[index] = '\0';
			ctr = 1;
			index++;
		}
	}
	return (dest);
}
