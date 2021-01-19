#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int));

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

int main ()
{
	int tab[4] = {0, 1, 2, 3};

	ft_foreach(tab, 4, &ft_putnbr);
}
