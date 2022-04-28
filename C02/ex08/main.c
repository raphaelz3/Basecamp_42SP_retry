#include <stdio.h>
char *ft_strlowcase(char *str);

int main()
{
	char string[11] = "AbcdeFghijk";
	
	

	char *isalpha;


	isalpha = ft_strlowcase(string);
	while(*isalpha != '\0')
	{
		printf("%c", *isalpha);
		isalpha++;
	}	
}