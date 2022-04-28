#include <unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr);

int    main(void)
{
    int *nbr;
    int    n;
    char div;
    char mod;
  
    nbr = &n;
    ft_ft(nbr);

    div = n / 10 + '0';
    mod = n % 10 + '0';
    
    write(1, &div, 1);
    write(1, &mod, 1);
    
    return (0);
}

