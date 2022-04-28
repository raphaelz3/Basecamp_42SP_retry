/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:49:25 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/13 17:37:40 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int d)
{
	char	div;
	char	mod;

	div = a / 10 + '0';
	mod = a % 10 + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
	write(1, " ", 1);
	div = d / 10 + '0';
	mod = d % 10 + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
	if (!(a == 98 && d == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	d;

	a = 00;
	while (a <= 98)
	{
		d = a + 1;
		while (d <= 99)
		{
			ft_putchar(a, d);
			d++;
		}
	a++;
	}
}
