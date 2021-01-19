#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int ft_is_alpha(char *str)
{
	int i;

	i =  0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}	
	return (1);	
}

int main ()
{
	char *str[4];

	str[0] = "Regarde";
	str[1] = "Comme";
	str[2] = "Fait";
	str[3] = "BEAU";
	printf("%d\n", ft_count_if(str, 4, ft_is_alpha));
	return (0);
}
