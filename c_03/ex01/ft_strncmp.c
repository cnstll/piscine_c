/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:11:46 by calle             #+#    #+#             */
/*   Updated: 2020/07/12 20:57:42 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0') && (i < n - 1))
		i++;
	if ((s1[i] > s2[i]) || (s1[i] != '\0' && s2[i] == '\0'))
		return (1);
	else if ((s1[i] < s2[i]) || (s1[i] == '\0' && s2[i] != '\0'))
		return (-1);
	else
		return (0);
}
