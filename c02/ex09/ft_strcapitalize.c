/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:33:14 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/01 09:55:25 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 97) && (str[i - 1] <= 122)))
		{	
			if (!((str[i - 1] >= 65) && (str[i - 1] <= 90)))
			{
				if (!((str[i - 1] >= 48) && (str[i - 1] <= 57)))
				{
					if (str[i] >= 97 && str[i] <= 122)
					{	
						str[i] -= 32;
						i++;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
