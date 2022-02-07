/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:31:08 by anshimiy          #+#    #+#             */
/*   Updated: 2022/01/30 14:50:25 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tab_length(char *src)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
		index++;
	return (index);
}

void	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (i <= ft_tab_length(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
