/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 08:06:42 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/07 15:30:21 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_raccourcir(char *a, char *b, char *c)
{
	if (*b == '8')
		{
			(*a)++;
			*b = *a + 1;
			*c = *b + 1;
		}
}

void	ft_print_comb(void)
{
	char a[3];

	a[0] = '0';
	a[1] = '1';
	a[2] = '2';
	while (a[0] <= '7' && a[1] <= '8' && a[2] <= '9')
	{
		if (a[2] == '9')
		{
			write(1, &a, 3);
			if (a[0] != '7')
			{
				write(1, ", ", 2);
			}
			a[1]++;
			a[2] = a[1] + 1;
		}
		ft_raccourcir(a, a + 1, a + 2);
		write(1, &a, 3);
		a[2] = a[2] + 1;
		if (a[0] != '7')
		{
			write(1, ", ", 2);
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}

