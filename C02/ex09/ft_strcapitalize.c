/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:32:32 by  rapgonca         #+#    #+#             */
/*   Updated: 2022/04/22 15:21:09 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		return (str);
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	char	*str2;

	str2 = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	str = str2;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*str2;

	str2 = str;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
		{
			ft_strupcase(str);
			str++;
			while ((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
				str++;
		}
		if (*str == '\0')
			return (str);
		if ((*str < '0' || *str > '9') && (*str < 'a' || *str > 'z'))
			str++;
	}
	str = str2;
	return (str);
}
