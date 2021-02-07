/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:26:29 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/05 17:27:48 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

int		main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_print_numbers(void)
{
	int d;

	d = 0;
	while (d < 10)
	{
		d++;
		write(1, &d, 1);
	}
}
