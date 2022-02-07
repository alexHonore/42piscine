/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:16:05 by anshimiy          #+#    #+#             */
/*   Updated: 2022/01/26 14:22:12 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_tab_length(char *src)
{
	unsigned int	index;

	index = 0;
	while (src[index])
		index++;
	return (index);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (i < ft_tab_length(str))
	{
		if (!((str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
