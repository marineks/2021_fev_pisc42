/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:02:00 by marine            #+#    #+#             */
/*   Updated: 2021/02/20 07:47:53 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int temp;

	i = 1;
	temp = nb;
	if (temp == 1 || temp == 0)
		return (1);
	else if (temp > 0)
	{
		while (i < temp)
		{
			nb *= (temp - i);
			i++;
		}
		return (nb);
	}
	else
		return (0);
}
