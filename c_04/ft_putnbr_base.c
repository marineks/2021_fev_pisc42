/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:29:12 by marine            #+#    #+#             */
/*   Updated: 2021/02/17 21:42:34 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nbr >= 0 && nbr <= 9)
    {
        ft_putchar(nbr + '0');
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(nbr * -1);
    }
    else if (nbr >= 0 && nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}