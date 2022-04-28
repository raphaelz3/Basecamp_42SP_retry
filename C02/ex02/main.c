#include <stdio.h>
int ft_str_is_alpha(char *str);

int main()
{
	char string[10] = "1bcdefghfi";
	char string2[10] = "abcdefghij";
	int isalpha;

	isalpha = ft_str_is_alpha(string);

	printf("Com numero: %i\n", isalpha);
	isalpha = ft_str_is_alpha(string2);
	printf("só letra: %i\n", isalpha);
}
