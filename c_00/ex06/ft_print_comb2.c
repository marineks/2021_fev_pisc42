/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:28:00 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/07 14:37:00 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchiffres(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);

	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char a, b, c, d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	
	while (a <= '9' && b <= '8' && c <= '9' && d <= '9')
	{
		if (d == '9')
		{
			d = '0'; // reset de d // pose probleme car 9s ne s'affichent pas!!
			c++;
		}	

		if (c == '9')
		{
			c = '0'; // idem ici avec les 9
			d = b + 1;
			b++;
		}	
		
		if (b == '8')
		{
			b = '0';
			c = a + 1;
			a++;
		}

		ft_putchiffres(a, b, c, d);
		d++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
