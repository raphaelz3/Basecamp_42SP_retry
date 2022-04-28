#include <stdio.h>
char	*ft_strcapitalize(char *str);
/*int main()
{
	char string[81] = "*aAa -Bbb /CCc {ab oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um Ate";

	int count;


	ft_strcapitalize(string);
	count = 0;
	while(string[count] != '\0')
	{
		printf("%c", string[count]);
		count++;
	}
	printf("\n");
}*/
#include <stdio.h>
int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	char str2[] = "ALO MALUCO 42BELEZA!";
	char str3[] = "alo+ma|uco a2beleza!";
	char str4[] = "ALO+MALUCO*a2BELEZA!";
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`a1V,qH+nsÇda's*s6541{f65sad1sdf´f´ccm$fvn askasfcds";
	char str7[] = " basecamp b";
	char str8[] = "ABCDEFGh$";
	char str9[] = "bCDEFGHI";

	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strcapitalize(str2);
	printf("str2_c: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strcapitalize(str3);
	printf("str3_c: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strcapitalize(str4);
	printf("str4_c: %s\n", str4);
	printf("str5: %s\n", str5);
	ft_strcapitalize(str5);
	printf("str5_c: %s\n", str5);
	printf("str6: %s\n", str6);
	ft_strcapitalize(str6);
	printf("str6_c: %s\n", str6);
	printf("str7: %s\n", str7);
	ft_strcapitalize(str7);
	printf("str7_c: %s\n", str7);
	printf("str8: %s\n", str8);
	ft_strcapitalize(str8);
	printf("str8_c: %s\n", str8);
	printf("str9: %s\n", str9);
	ft_strcapitalize(str9);
	printf("str9_c: %s\n", str9);
	
	return (0);
}
