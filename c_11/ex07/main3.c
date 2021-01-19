#include <stdio.h>
void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));
int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] > s2[i] || (s1[i] && !s2[i]))
		return (1);
	else if (s1[i] < s2[i] || (!s1[i] && s2[i]))
		return (-1);
	else
		return (0);
}

int main (void)
{
	char *str[3];
	str[0] = "abbb";
	str[1] = "abba";
	str[2] = 0;
	int i = 0;
	ft_advanced_sort_string_tab(str,ft_strcmp);
	while (i < 2)
		printf("%s\n", str[i++]);
	return (0);
}
