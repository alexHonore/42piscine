/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:28:49 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/05 16:22:19 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	total_size;

	total_size = ft_strlen(dest) + ft_strlen(src);
	if (size >= ft_strlen(dest))
	{	
		i = ft_strlen(dest);
		while (*src != '\0' && i < size)
		{
			dest[i] = *src;
			src++;
			i++;
		}
	}
	else
	{	
		i = 0;
		while (*dest != '\0' && i++ < size)
		{
			dest[i] = *dest;
			dest++;
		}
	}
	dest[i] = '\0';
	return (total_size);
}
