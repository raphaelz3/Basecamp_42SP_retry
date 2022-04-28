/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 02:28:43 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/22 03:46:46 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count2;

	count = 0;
	count2 = 0;
	while (dest[count] != '\0')
		count++;
	while (src[count2] != '\0')
	{
		if (count2 == nb)
		{
			dest[count] = '\0';
			return (dest);
		}
		dest[count] = src[count2];
	count++;
	count2++;
	}
	dest[count] = '\0';
	return (dest);
}
