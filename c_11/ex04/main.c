#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int ft_tab_order(int i, int j)
{
	return (i - j);
}

int main ()
{	
	int tab[6] = {,,,,,};
	
	printf("%d\n", ft_is_sort(tab, 6, ft_tab_order));
	return (0);
}
