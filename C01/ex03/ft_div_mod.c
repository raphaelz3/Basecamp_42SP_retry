/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:08:12 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/18 17:27:20 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result_div;
	int	result_mod;

	result_div = a / b;
	result_mod = a % b;
	*div = result_div;
	*mod = result_mod;
}
