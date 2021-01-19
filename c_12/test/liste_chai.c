/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste_chai.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 10:33:25 by calle             #+#    #+#             */
/*   Updated: 2020/07/23 14:01:13 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct		s_list
{
	int		i;
	char	c;
	struct s_list *next;
};

void aff_list(struct s_list *begin)
{
	while (begin != 0)
	{
		printf("%d\n", begin -> i);
		begin = begin->next; 
	}
}

int main(void)
{
	struct s_list elem1;
	struct s_list elem2;
	struct s_list elem3;
	struct s_list *begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1
	elem2.i = 41;
	elem3.i = 42;

	aff_list(begin);
	return (0);
}
