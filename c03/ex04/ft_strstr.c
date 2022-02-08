/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 04:58:48 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/05 16:20:06 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;
	int	index;

	counter = 0;
	if (to_find[0] == '\0')
		return (str);
	if (ft_strlen(to_find) > ft_strlen(str))
		return (NULL);
	while (str[counter] != '\0')
	{
		index = 0;
		while (str[counter + index] == to_find[index] && str[counter + index])
		{
			if (to_find[index + 1] == '\0')
				return (&str[counter]);
			index++;
		}
		counter++;
	}
	return (NULL);
}
