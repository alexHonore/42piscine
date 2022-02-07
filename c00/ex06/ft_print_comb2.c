/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:15:42 by anshimiy          #+#    #+#             */
/*   Updated: 2022/01/23 20:57:59 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// 48 pour commencer la table acsii
// ex: c=20 / 10 = 2 + 48 = 50, 50 == 2 en ascii	
// ex: modulo (reste de la division) 20%10=0, + 48 == 0 en ascii
// ex c=53 53%10 = 3 + 48 = 51 === 3 en ascii 

void	ft_write_num(int c, int d)
{
	ft_putchar(c / 10 + 48);
	ft_putchar(c % 10 + 48);
	ft_putchar(' ');
	ft_putchar(d / 10 + 48);
	ft_putchar(d % 10 + 48);
	if (c < 98 || d < 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_num(a, b);
			b++;
		}
		a++;
	}
}
