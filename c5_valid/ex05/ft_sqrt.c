/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 08:24:24 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/20 12:04:42 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i < nb && i < 46340)
	{
		if (i * i < nb)
			i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}