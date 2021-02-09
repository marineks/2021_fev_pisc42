/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:43:39 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/09 15:34:43 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp; // variable qui sert a stocker 

	i = 0;
	j = size - 1;

	while (i < size / 2) // ou alors tant que i!=j ? 
	{
		// swapper les valeurs
		temp = *(tab + i);
		*(tab + i) = *(tab + j);
		*(tab + j) = temp;
		// incrementer i et decrementer j pour selectionner la paire suivante
		i++;
		j--;
	}
}

int		main(void)
{
	int size = 12;
	int tab[12] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	int k;

	k = 0;

	while ( k < size)
	{
		printf(" %d", tab[k]);
		k++;
	}
	ft_rev_int_tab(tab, size);
	printf("\n");
	k = 0;
	while (k < size)
	{
		printf(" %d", tab[k]);
		k++;
	}
	
	return (0);
}
