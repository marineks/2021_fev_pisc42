/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 09:00:42 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/06 12:25:47 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// Les fonctions ft putchar et main devront etre deplacees dans leurs fichiers correspondants
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// NB : pour la 1ere phase de test, on va travailler avec des char. Mais a la base on doit soumettre des int!!!
char	rush(int x, int y)
{	
	char array[y][x]; // je declare mon tableau de tableaux
	
	array[0][0] = 'A';
	array[0][1] = 'B';
	array[0][2] = 'C';
	array[1][0] = 'B';
	array[1][1] = ' ';
	array[1][2] = 'B';

	int i;
	int j; // je declare les deux incrementaux qui me permettront de looper dans chaque tableau (attention en while car for interdit)

	i = 0;
	j = 0;

	size_t length= sizeof array /sizeof array[0]; // variable qui stocke la longueur d'un array : on divise la taille du tableau par le nombre d'elts sur 1 ligne

	// Partie ou je delimite bien les conditions / attribue les lettres
	
	if (x < 0 || y < 0)
	{
		write(1, "Veuillez rentrer une valeur positive pour x et y", 41); 
	}

	// Partie ou j affiche le tableau final
	
	while (i < y)
	{
		while (j < x)
		{
			i++;
			j++;
			printf("%c", array[y][x]); // ligne qui affiche le tableau final

		   if (j ==  array[y][length -1]) // cette ligne permet d'aller a la ligne a la fin d une ligne
		   {
			   write(1, "\n", 1);
		   }
		}
	}
	return ('0');	
}

int		main()
{
	rush(3, 3);
	return (0);
}	
