/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:25:34 by igabrial          #+#    #+#             */
/*   Updated: 2022/04/10 02:47:16 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	ft_putchar(char z);

char	ft_countcollum(int coluna)
{
	int	countcol;

	countcol = 0;
	while (countcol < coluna - 2)
	{
		ft_putchar(' ');
		countcol++;
	}
	return (0);
}

char	ft_colluzero(int coluna)
{
	int	count;

	count = 0;
	ft_putchar('C');
	while (count < coluna - 2)
	{
		ft_putchar('B');
		count++;
	}
	if (coluna > 1)
		ft_putchar('A');
	write(1, "\n", 1);
	return (0);
}

char	ft_collumm(int coluna)
{
	int	count;

	count = 0;
	ft_putchar('A');
	if (coluna == 2)
		ft_putchar('C');
	if (coluna > 2)
	{
		while (count < coluna - 2)
		{
			ft_putchar('B');
			count++;
		}
		ft_putchar('C');
	}
	write(1, "\n", 1);
	return (0);
}

char	rush04(int coluna, int linha)
{
	int	countlinha;

	countlinha = 0;
	if (coluna < 1 || linha < 1)
		return (0);
	if (coluna > 0)
		ft_collumm(coluna);
	if (linha == 2)
		ft_putchar('C');
	if (linha > 2)
	{
		while (countlinha < linha - 2)
		{
			ft_putchar('B');
			if (coluna > 2)
				ft_countcollum(coluna);
			if (coluna > 1)
				ft_putchar('B');
			write(1, "\n", 1);
				countlinha++;
		}
		if (coluna > 0)
			ft_colluzero(coluna);
	}
	return (0);
}
