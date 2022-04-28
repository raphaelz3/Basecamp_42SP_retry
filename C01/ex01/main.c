#include<unistd.h>

void ft_ultimate_ft(int *********nbr);

int    main(void)
{

	int *nbr;
	int **nbra;
	int ***nbrb;
	int ****nbrc;
	int *****nbrd;
	int ******nbre;
	int *******nbrf;
	int ********nbrg;
	int *********nbrh;
	int    n;
	char div;
	char mod;

	nbr = &n;
	nbra = &nbr;
	nbrb = &nbra;
	nbrc = &nbrb;
	nbrd = &nbrc;
	nbre = &nbrd;
	nbrf = &nbre;
	nbrg = &nbrf;
	nbrh = &nbrg;

    ft_ultimate_ft(nbrh);

    div = n / 10 + '0';
    mod = n % 10 + '0';
    
    write(1, &div, 1);
    write(1, &mod, 1);
    
    return (0);
}
