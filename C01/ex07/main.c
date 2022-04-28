void ft_rev_int_tab(int *tab, int size);


#include <stdio.h>
#include <stdlib.h>

/*void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(10, sizeof(int));
	counter = 0;
	while (counter < 10)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}*/

int main()
{	
    int integers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 10;

	 ft_rev_int_tab(integers, size);
}

/*void ft_rev_int_tab(int *tab, int size)
{
	int	reverseIntegers[size];
    int printControl;
	int count;
	char print;

	printControl = size;
    count = 0;
    while(size >= 0)
    {
    size--;
    reverseIntegers[size] = *tab;
    tab++;
    }
	while(count <= printControl)
	{
		print = reverseIntegers[count] + '0';
		write(1, &print, 1);
		count++;
	}
}*/