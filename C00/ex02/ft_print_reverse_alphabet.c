/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:05:34 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/07 18:15:14 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zeta;

	zeta = 'z';
	while (zeta >= 'a')
	{
		write(1, &zeta, 1);
		zeta--;
	}
}
