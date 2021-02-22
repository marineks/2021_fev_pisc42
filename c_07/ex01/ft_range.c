/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 09:18:58 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/22 15:08:56 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (tab = NULL);

	tab = malloc(sizeof(int*) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

#include <stdio.h>
int main()
{
	int max = 60;
   	int min = 75;	
	int j;

	for (j = 0; j < (max - min); j++)
		printf("%d ", (ft_range(min, max))[j]);
	return (0);
}
