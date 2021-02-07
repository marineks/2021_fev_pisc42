/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04_v2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:32:52 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/06 15:44:18 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	afficheLigneX(int x)
{
	if (x == 1)										// Cas rush(1, y)
	{
		ft_putchar('A');
	}
	else if (x > 1)
	{
		int i;
		
		i = 1;
		ft_putchar('A');
		while (i <= (x - 2))						// x - 2 pour prendre en compte les lettres A et C 
		{
			i++;
			ft_putchar('B');
		}
		ft_putchar('C');
	}
	write(1, "\n", 1);
}

void	afficheLigneXder(int x)
{
	if (x == 1)                                     // Cas rush(1, y)
      {
          ft_putchar('C');
      }
      else if (x > 1)
      {
          int i;
 
          i = 1;
          ft_putchar('C');
          while (i <= (x - 2))                        // x - 2 pour prendre en compte les lettres A et C
          {
              i++;
              ft_putchar('B');
          }
          ft_putchar('A');
      }
      write(1, "\n", 1);
}

void	afficheLigneY(int y, int x)
{
	if (y > 1)
	{
		int j;

		j = 1;
		while (j <= x)
		{
			(j == 1 || j == x)? ft_putchar('B') : ft_putchar(' ');
			j++;
		}
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)							// On evacue directement le cas des valeurs negatives
	{
		write(1, "Les valeurs negatives ne sont pas acceptees.", 44);	
	}
	else										// Boucles pour repeter les fonctions
	{
		int i;

		i = 0;
		afficheLigneX(x);

		while( i < y - 2)
		{
			afficheLigneY(y, x);
			i++;
		}
		if (x > 1 && y > 1)
		{
			afficheLigneXder(x);
		}
	}	
}

int		main()
{
	rush(4, 4);
	return (0);
}
