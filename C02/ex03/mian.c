#include <stdio.h>
int ft_str_is_numeric(char *str);
int main()
{
	char string[10] = "01234567w9";
	char string2[10] = "0123456789";
	int isalpha;

	isalpha = ft_str_is_numeric(string);
	printf("Com letra: %i\n", isalpha);

	isalpha = ft_str_is_numeric(string2);
	printf("só numero: %i\n", isalpha);

}