#include <stdio.h>
void ft_sort_string_tab(char **tab);
int main (void)
{
	char *str[4];
	str[0] = "zaaaaa";
	str[1] = "zaaaab";
	str[2] = "a";
	str[3] = 0;
	int i = 0;
	ft_sort_string_tab(str);
	while (i < 3)
		printf("%s\n", str[i++]);
	return (0);
}
