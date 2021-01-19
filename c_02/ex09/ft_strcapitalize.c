/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 14:30:27 by calle             #+#    #+#             */
/*   Updated: 2020/07/06 11:05:28 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = i - 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			if (i != 0 && (str[j] < 48 || (str[j] > 57 && str[j] < 65)))
				str[i] = str[i] - 32;
			if (i != 0 && ((str[j] > 90 && str[j] < 97) || str[j] > 122))
				str[i] = str[i] - 32;
		}
		i++;
		j++;
	}
	return (str);
}
