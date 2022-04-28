#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char *src;
	char *dest;
	char *ft_src;
	char *ft_dest;
	char *result;
	char *ft_result;

	src = calloc(17, sizeof(char));
	dest = calloc(25, sizeof(char));
	ft_src = calloc(17, sizeof(char));
	ft_dest = calloc(25, sizeof(char));
	strcpy(src, "bomasdfghjklç[");
	strcpy(dest, " deuasdfgh");
	strcpy(ft_src, "bomasdfghjklç[");
	strcpy(ft_dest, " deuasdfgh");
	result = strcat(dest, src);
	ft_result = ft_strcat(ft_dest, ft_src);
	if (ft_dest != ft_result)
		printf("KO, return value of ft_strcar is different of ft_dest. ft_strcar=%p ft_dest=%p\n", ft_result, ft_dest);
	else if (strcmp(result, ft_result) != 0)
		printf("KO, value returned from strcmp with ft_strcat and strcat is different of zero(%d).\n", strcmp(result, ft_result));
	else
		printf("dest: ' deuasdfgh' ° src: 'bomasdfghjklç'\nresult: %s\n", ft_result);
	return (0);
}