/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:40:08 by calle             #+#    #+#             */
/*   Updated: 2020/07/13 19:02:13 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_solution(int n)
{
	int d;
	int i;
	int j;

	i = 0; 
	while (i < 10)
	{
		j = 0; 
		while (j <= n)
		{
			tab[n] = i; 
			d = (tab[n] - tab[n - j]);
			if ((tab[n] != tab[n - j]) && (tab[n] != tab[n] - d) && (tab[n] != tab[n] + d))
			{	
				ft_find_solution(n + 1);  
			}
			j++;
		}
	}	
}

int		ft_ten_queens_puzzle(void)
{
	int n;

	n = 0; 
	return ft_find_solution(n); 


