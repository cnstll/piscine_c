#include <stdio.h>
#include <unistd.h>
char **ft_split(char *str, char *charset);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}


int main(void)
{
	printf("\n------------Test 1-------------\n");
	char str[] = "ulQpswq8pinX0ifmYh3Cp04xzEe0X2pk3wt";
	char charset[] = "";
	printf("Original string = %s\n", str);
	printf("Charset = %s\n", charset);
	char **split;
	int h = 0;
	split = ft_split(str, charset);
	while (split[h] != 0)
	{
		ft_putstr(split[h]);
		write(1, &"\n", 1); 
		h++;
	}
	return (0);
}
