#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main()
{
	char string[11] = "acvbfgdhtr\0";
	
	char string2[11] = "abcdefghIh\0";
	int isalpha;
	

	isalpha = ft_str_is_lowercase(string);
	printf("só minusculo: %i\n", isalpha);

	isalpha = ft_str_is_lowercase(string2);
	printf("com Maisculo: %i\n", isalpha);
}