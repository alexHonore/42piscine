/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:05:36 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/05 16:17:54 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	size;

	size = 0;
	while (dest[size])
		size++;
	while (*src)
	{
		dest[size] = *src;
		src++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
