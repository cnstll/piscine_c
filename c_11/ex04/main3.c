#include <stdio.h>
int ft_is_sort(int *tab, int length, int(*f)(int, int));
int ft_tab_order(int i, int j)
{
	return (i - j);
}
int main ()
{
	int tab[] = {};
	printf("is one ? %d\n", ft_is_sort(tab, 0, ft_tab_order));
	int tab2[6] = {6, 6, 6, 6, 6, -6};
	printf("is one ? %d\n", ft_is_sort(tab2, 6 , ft_tab_order));
	int tab3[6] = {-1, -1, -1, -1, -1, -1};
	printf("is one ? %d\n", ft_is_sort(tab3, 6, ft_tab_order));
	int tab4[6] = {0, 1, 1 ,1, 2, 3};
	printf("is one ? %d\n", ft_is_sort(tab4, 6, ft_tab_order));
	int tab5[6] = {-6, -6, -12, -14, -15, -20};
	printf("is one ? %d\n", ft_is_sort(tab5, 6, ft_tab_order));
	int tab6[] = {0};
	printf("is one ? %d\n", ft_is_sort(tab6, 1, ft_tab_order));
	int tab7[6] = {6, 6, 6, 6, 7, -6};
	printf("is not one ? %d\n", ft_is_sort(tab7, 6 , ft_tab_order));
	int tab8[6] = {-1, -1, -1, 0, -1, -1};
	printf("is not one ? %d\n", ft_is_sort(tab8, 6, ft_tab_order));
	int tab9[6] = {0, 1, 1 ,1, 2, 1};
	printf("is not one ? %d\n", ft_is_sort(tab9, 6, ft_tab_order));
	int tab10[6] = {-6, -6, -5, -14, -15, -20};
	printf("is not one ? %d\n", ft_is_sort(tab10, 6, ft_tab_order));
	return (0);
}
