/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 19:51:27 by calle             #+#    #+#             */
/*   Updated: 2020/07/12 20:59:05 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && str[i + j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
