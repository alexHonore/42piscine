/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:09:43 by anshimiy          #+#    #+#             */
/*   Updated: 2022/01/26 14:17:42 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_tab_length(char *src)
{
	unsigned int	index;

	index = 0;
	while (src[index])
		index++;
	return (index);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (i < ft_tab_length(str))
	{
		if (!((str[i] >= 40 && str[i] <= 57)))
			return (0);
		i++;
	}
	return (1);
}
