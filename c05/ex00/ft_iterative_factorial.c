/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:48:14 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/01 21:37:14 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	i = 1;
	n = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i <= nb)
	{
		n *= i;
		i++;
	}
	return (n);
}
