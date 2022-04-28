/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:21:00 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/17 16:27:12 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	*pointer;

	pointer = tab + size - 1;
	count = 0;
	while (count < size / 2)
	{
		ft_swap(tab, pointer);
		tab++;
		pointer--;
		count++;
	}
}
