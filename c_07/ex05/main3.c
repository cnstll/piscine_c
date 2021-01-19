#include <stdio.h>
char **ft_split(char *str, char *charset);
int ft_isnul_finished(char *str)
{
    int i; 

    i = 0;
    while (str[i])
        i++;
    if (!str[i])
        return (1);
    else
        return(-1);
}

int main()
{
    int h = 0;
	char str[] = "e3F7YyR3vPqeW1LJsZBwGFoIvFXL0cZXalyFqqYapZ5Wd";
	char charset[] = "XfepSg2";
	char **split;
	split = ft_split(str, charset);
    while (split[h])
    {
        printf("%s\n", split[h]);
        printf("Split[%d] is nul terminated %d\n",h, ft_isnul_finished(split[h]));
        h++;
    } 
    return 0;
}
