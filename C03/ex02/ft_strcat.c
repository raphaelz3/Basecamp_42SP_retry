/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:32:20 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/22 13:35:06 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		count;
	int		srcount;

	count = 0;
	srcount = 0;
	while (dest[count] != '\0')
		count++;
	while (src[srcount] != '\0')
	{
		dest[count] = src[srcount];
	count++;
	srcount++;
	}
	dest[count] = '\0';
	return (dest);
}
