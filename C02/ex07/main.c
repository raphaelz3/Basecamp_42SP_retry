#include <stdio.h>
char *ft_strupcase(char *str);
int main()
{
	char string[11] = "AbcdeFghijk";
	
	

	char *isalpha;


	isalpha = ft_strupcase(string);
	while(*isalpha != '\0')
	{
		printf("%c", *isalpha);
		isalpha++;
	}	
}
