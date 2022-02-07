/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:48:14 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/07 13:42:13 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	count;

	index = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	while (src[index] < size && index <= count)
	{
		dest[index - 1] = src[index - 1];
		index++;
		size--;
	}
	dest[count] = '\0';
	return (count);
}
