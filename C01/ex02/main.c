#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a, int *b);
int main(void)
{
    int *a;
    int *b;
    int c;
    int d;
    
    c = 10;
    d = 11;

    a = &c;
    b = &d;
	printf("%d %d\n", *a, *b);
    ft_swap(a, b);
    
    printf("%d %d\n", *a, *b);
  
    

}