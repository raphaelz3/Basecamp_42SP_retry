#include <unistd.h>

void	ft_putchar(int n)
{
	char div;
	char mod;

	div = n / 10 + '0';
	mod = n % 10 + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int	d;

	a = 0;
	while (a <= 98)
	{
		d = a + 1;
		while (d <= 99)
		{
			ft_putchar(a);
			write(1, " ", 1);
			ft_putchar(d);
			if (!(a == 98 && d == 99))
				write(1, ", ", 2);
		d++;
		}
	a++;
	}
}
