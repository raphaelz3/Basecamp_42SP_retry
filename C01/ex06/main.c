#include<stdio.h>
int ft_strlen(char *str);
int main(void)
{
    char *str;
    char strings[9] = {'b', 'a', 's', 'e', 'c', 'a', 'm', 'p','.'};
	int result;
	

   str = &strings[0];

	result = ft_strlen(str);
	printf("%i", result);
}