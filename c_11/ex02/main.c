/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 21:31:29 by calle             #+#    #+#             */
/*   Updated: 2020/07/22 21:36:21 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_any(char **tab, int(*f)(char*));
int ft_is_alpha(char *str)
{
	int i;
	i =  0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			return (1);
		i++;
	}
	return (0);
}
int main (void)
{
	char *str[4];
	str[0] = " ";
	str[1] = " ";
	str[2] = "11";
	str[3] = 0;
	printf("%d\n", ft_any(str, ft_is_alpha));
	return (0);
}
