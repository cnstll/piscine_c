#include <stdio.h>
int ft_iterative_factorial(int nb);

int main()
{
	printf("4! - %d\n", ft_iterative_factorial(4));
	printf("0! - %d\n", ft_iterative_factorial(0));
	printf("(-1!) - %d\n", ft_iterative_factorial(-1));
	printf("13! - %d\n", ft_iterative_factorial(13));
	return 0;
}
