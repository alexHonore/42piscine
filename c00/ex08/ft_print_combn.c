/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:39:44 by anshimiy          #+#    #+#             */
/*   Updated: 2022/01/23 21:16:10 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// 
void	ft_print_combn(int n)
{
	char	t[11];
	int		i;

	if (n < 1 || n > 9)
		return ;
	*t = '0';
	i = 0;
	while (++i < n)
		t[i] = t[i - 1] + 1;
	t[n] = ',';
	t[n + 1] = ' ';
	while (*t <= 58 - n)
	{
		write(1, t, n);
		if (*t != 58 - n)
			write(1, ", ", 2);
		i = n;
		while (i--)
			if (++t[i] <= 58 - n + i)
				break ;
		while (++i > 0 && i < n)
			t[i] = t[i - 1] + 1;
	}	
}
