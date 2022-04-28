/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:15:49 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/17 19:34:13 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	controler;
	int	*pointer;

	pointer = tab;
	while (size >= 0)
	{
		pointer = tab;
		controler = size;
		while (controler > 0)
		{
			if (*tab > *pointer)
				ft_swap(tab, pointer);
			pointer++;
			controler--;
		}
		tab++;
		size--;
	}
}
