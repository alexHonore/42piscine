/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:00:05 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/07 16:35:55 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (n-- > 0 && (*s1 || *s2))
	{
		x += *s1++;
		y += *s2++;
		if (x != y)
			return (x - y);
	}
	return (0);
}
