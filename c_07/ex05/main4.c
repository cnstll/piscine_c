#include <stdio.h>
char **ft_split(char *str, char *charset);
int main()
{
        char **test;
        test = ft_split("--hello25bonjour(^)+salut4", "123456789-()^+-");
        printf("hello ? %s\n", *(test));
        printf("bonjour ? %s\n", *(test + 1));
        printf("salut ? %s\n", *(test + 2));
        char **test2;
        test2 = ft_split("abc", "");
        printf("abc ? %s\n", *test2);
        char **test3;
        test3 = ft_split("", "");
        printf("0x0 ? %p\n", test3);
        char **test4;
        test4 = ft_split("", "abc");
        printf("0x0 ? %p\n", test4);
		char **test5;
		test5 = ft_split("ZkGzIhTFzWQQPOuj2CMHw3oIP4dpH7US2eR9j593n2", "L0uQzY1");
		printf("ZkG ? %s\n", *(test5));
		printf("IhTF ? %s\n", *(test5 + 1));
		printf("W ? %s\n", *(test5 + 2));
		printf("PO ? %s\n", *(test5 + 3));
		printf("j2CMHw3oIP4dpH7US2eR9j593n2 ? %s\n", *(test5 + 4));
		printf("(null) ? %s\n", *(test5 + 5));
}
