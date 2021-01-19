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
	char str[] = "ceci,,est,,un,test,comme,,,on,en,a,si,souvent,besoin,";
	char charset[] = ",";
	char **split;
	split = ft_split(str, charset);
    while (split[h])
    {
        printf("%s \n", split1[h]);
        printf("Split[%d] is nul terminated %d\n\n",h, ft_isnul_finished(split[h]));
        h++;
    } 
    return 0;
}
