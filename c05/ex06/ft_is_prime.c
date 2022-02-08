/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:48:26 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/02 16:22:42 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	result;

	result = 2;
	if (nb < 2)
		return (0);
	while (result <= nb / 2)
	{
		if (nb % result == 0)
			return (0);
		result++;
	}
	return (1);
}
