#include<stdio.h>
int ft_str_is_uppercase(char *str);
int main()
{
	char string[11] = "ABCDEFGHIJ\0";
	
	char string2[11] = "abcdefghiH\0";
	int isalpha;
	

	isalpha = ft_str_is_uppercase(string);
	printf("só minusculo: %i\n", isalpha);

	isalpha = ft_str_is_uppercase(string2);
	printf("com Maisculo: %i\n", isalpha);
}
