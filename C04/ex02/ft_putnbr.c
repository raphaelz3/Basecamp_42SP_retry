/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:53:08 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/23 07:23:24 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_revprint(int size, char *numbers)
{
	char	alpha;

	while (size > 0)
	{
		alpha = numbers[size - 1];
		ft_putchar(alpha);
		size--;
	}
}

void	ft_putnumbers(int nb)
{
	char	numbers[10];
	int		count;
	int		size;

	size = 0;
	count = 0;
	while (nb > 0)
	{
		numbers[count] = nb % 10 + '0';
		count++;
		size++;
		nb = nb / 10;
	}
	if (count <= 10)
	{
		while (count != 10)
		{
			numbers[count] = '\0';
			count++;
		}
	}
	ft_revprint(size, numbers);
}

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	if (nb == 0)
		ft_putchar('0');
	ft_putnumbers(nb);
}
