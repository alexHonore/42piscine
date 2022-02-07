/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:37:35 by anshimiy          #+#    #+#             */
/*   Updated: 2022/02/01 09:37:53 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

// loop the tab
// in each loop, swap the n index with the n+1 until n<n+1
// re-loop from begining until every numbers correctly swaped
void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i <= size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
