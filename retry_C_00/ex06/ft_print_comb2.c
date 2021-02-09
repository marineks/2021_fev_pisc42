/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:28:00 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/09 08:25:58 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	second_loop(int a, int b)
{
	while (b < 100)
	{
		if (a != b)
		{
			if (a <= 9)
			{
				ft_putchar('0');
			}
			ft_putnbr(a);
			ft_putchar(' ');
			if (b <= 9)
			{
				ft_putchar('0');
			}
			ft_putnbr(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		b++;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a;
		second_loop(a, b);
		a++;
	}
}
