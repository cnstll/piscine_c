#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int));
int *ft_map(int *tab, int length, int(*f)(int));
int ft_add_one(int i);

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putnbr(int nb)
{
	unsigned int	unsnb;

	if (nb < 0)
	{
		unsnb = -nb;
		ft_putchar('-');
	}
	else
	{
		unsnb = nb;
	}
	if (unsnb < 10)
	{
		ft_putchar(unsnb + '0');
	}
	else
	{
		ft_putnbr(unsnb / 10);
		ft_putnbr(unsnb % 10);
	}
}

int ft_add_one(int i)
{
	i = i + 100;
	return (i); 
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
		(f)(tab[i++]);
}

int main ()
{
	int tab[4] = {0, 1, 2, 3};

	ft_foreach(ft_map(tab, 4, &ft_add_one), 4, &ft_putnbr);
}
