/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 07:43:35 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/10 11:25:13 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp; // variable qui sert a stocker 
	int start_again; // pour recommencer le process autant de fois qu il faut

	i = 0;
	j = i + 1;
   	start_again = 1;	

    while (start_again <  size) 
	{	
		while (j <= size - 1) // on veut que ca loupe jusqu'a ce que j "touche le fond" du tableau
		{	
			if (*(tab + j) < *(tab + i)) // si la valeur que j designe est inf a celle de i, on swappe
			{
				// swapper les valeurs 
				temp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temp;
			}
				// incrementer i et j pour selectionner la paire suivante
				i++;
				j++;
				
		}
		start_again++;
		i = 0;
		j = i + 1;
	}
}

int		main(void)
{
	int size = 10;
	int tab[10] = {3, 5, 4, 0, 2, 21, 3, 78, 6, 8};

	int k;

	k = 0;

	while ( k < size)
	{
		printf(" %d", tab[k]);
		k++;
	}
	ft_sort_int_tab(tab, size);
	printf("\n");
	k = 0;
	while (k < size)
	{
		printf(" %d", tab[k]);
		k++;
	}
	
	return (0);
}

