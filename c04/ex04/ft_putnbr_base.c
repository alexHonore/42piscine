/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:54:01 by anshimiy          #+#    #+#             */
/*   Updated: 2022/01/31 23:11:57 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb < 10 && nb >= 0)
    {
        ft_putchar(nb + 48);
        return;
    }
    else
    {
        ft_putnbr(nb / 10);
    }
    ft_putnbr(nb % 10);
}


char	*ft_to_bi(int nb, char *tab)
{
    //char	result[];
    int counter;
    int buffer;

    buffer = 0;
    while (nb > 0)
    {
        buffer = nb / 2;
        *tab[counter] = nb % 2;
        nb = buffer;
        counter++;
    }
    return (tab);
}


int	ft_base_check(char *base)
{
    int size;
    int i;
    int j;

    size = 0;
    i = 0;
    while (base[size])
        size++;
    if (size <= 1)
        return (0);
    if (size == 2)
        if ((base[0] != '0' && base[1] != '1'))
            if ((base[0] != '1' && base[1] != '0'))
                return (0);
    while (base[i])
    {
        if (!(base[i] >= 48 && base[i] <= 57))
            if (!(base[i] >= 65 && base[i] <= 70))
                if (!(base[i] >= 97 && base[i] <= 102))
                    return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}



void ft_putnbr_base(int nbr, char *base)
{
	
}
int main(void)
{
    return (0);
}
