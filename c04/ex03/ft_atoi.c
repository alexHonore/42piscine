/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:45:09 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/07 16:48:28 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_white_space(char *str)
{
    // while
    //      if (str[cpt] == 32 || (str[cpt] >= 9 && str[cpt] <= 13))
}

int	ft_atoi(char *str)
{
	int		cpt;
	int		number;
	int		minus;

	cpt = 0;
	number = 0;
	minus = 1;
	while (str[cpt] == 32 || (str[cpt] >= 9 && str[cpt] <= 13) || str[cpt] == '+' || str[cpt] == '-')
	{
		if (str[cpt] == '-')
			minus *= -1;
		cpt++;
	}
	while (str[cpt] >= '0' && str[cpt] <= '9')
	{
		number = (str[cpt] - '0') + (number * 10);
		cpt++;
	}
	return (number * minus);
}
