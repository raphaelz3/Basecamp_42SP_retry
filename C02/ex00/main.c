#include<stdio.h>
char *ft_strcpy(char *dest, char *src);
int main()
{
	char *src = "basecamp";
	char dest[9];
	int i;
	ft_strcpy(dest, src);
	i = 0;
	while(dest[i] != '\0')
	{
		printf("%c",dest[i]);
		i++;
	}
	printf("\n");
}