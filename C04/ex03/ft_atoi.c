/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:55:54 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/23 02:51:27 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count;
	int	signal;
	int	res;

	count = 0;
	signal = 1;
	res = 0;
	while (((str[count] >= 9 && str[count] <= 13) || str[count] == 32))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			signal = signal * -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = (str[count] - '0') + res * 10;
		count++;
	}
	return (res * signal);
}
