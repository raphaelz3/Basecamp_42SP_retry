/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:29:05 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/14 17:35:29 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}
void	ft_positive(int nb)
{
	char	teste[10];
	char	z;
	int		n;
	int		count;
	int		control;
	
	count = 0;
	while (count <= 9)
	{
		n = nb / 10;
		if (nb == 0)
		{
			while (count < 10)
			{
				teste[count] = '\0';
				count++;
			}
		}
	z = nb % 10 + '0';
	teste[count] = z;
	count++;
	nb = n ;
	}
	control = 0;
	while (teste[control] != '\0')
	{
		control++;
	}
	while (control >= 0)
	{
		ft_putchar(teste[control]);
		control--;
	}
}

void	ft_putnbr(int nb)
{

	if (nb > 0)
	{
		ft_positive(nb);
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
		ft_positive(nb);
	}
	write(1, "\n", 1);
}
