/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:29:56 by anshimiy          #+#    #+#             */
/*   Updated: 2022/01/27 00:47:46 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// why size / 2? because inside the loop we are swaping the first
// AND the last value at the same loop operation
// by doing so, we only need half of the array length to operate :
//
//  0   1   2   3   4    =====>   4   3   2   1   0
//  |   |   |   |   |             |   |   |   |   |
//  |   |   |   |   |-------------|   |   |   |   |
//  |   |   |   |---------------------|   |   |   |
//  |   |   |-----------------------------|   |   |
//  |   |-------------------------------------|   |
//  |---------------------------------------------|
void	ft_rev_int_tab(int *tab, int size)
{
	int		index;
	int		tmp;

	index = 0;
	while (index < size / 2)
	{
		tmp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = tmp;
		index++;
	}	
}
