/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 18:55:47 by calle             #+#    #+#             */
/*   Updated: 2020/07/02 19:05:18 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int swap_a;
	int swap_b;

	swap_a = *a;
	swap_b = *b;
	*a = swap_b;
	*b = swap_a;
}
