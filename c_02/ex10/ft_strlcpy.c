/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 07:53:21 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/12 07:53:23 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// STRLCPY PRESQUE FAIT MAIS DOIT REPRODUIRE SRC EN ENTIER?


#include <stdio.h>

unsigned int		ft_strlen(char *str)
{
	unsigned int counter;

	counter = 0;

	while (*(str + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}

int	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	// 
	unsigned int i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1))
		{
			dest[i] = src[i]; 
			i++;
		}
		dest[i] = '\0';
	}
return (n);
}
	// if (ft_strlen(src) >= n) // cas 1: la longueur de src >= n
	// {
	// 	while (i < n) // swappe les valeurs jusqu'a n
	// 	{
	// 		dest[i] = src[i]; 
	// 		i++;
	// 	}
	// 	dest[i] = '\0'; // on append le \0 de fin
	// }
	// else 					// cas 2 : longueur de src < n
	// {
	// 	i = 0;
	// 	while (i < ft_strlen(src)) // swappe les valeurs jusqu a la fin de src
	// 	{
	// 		dest[i] = src[i];
	// 		i++; 
	// 	}
	// 	while (dest[i] != 0) // on reprend le i incremente et on met des \0 jusqu a la fin de dest
	// 	{
	// 		dest[i] = '\0';
	// 		i++;
	// 	}	
	// }
	

	// return (n);


int main(void)
{
	char dest[] = "hellohellohello";
	char src[] = "oui";
	unsigned int size = 10;
	int j;

	printf("\n");
	ft_strlcpy(dest, src, size);

	j = 0;
	while (dest[j] != '\0')
	{
		printf("%c", dest[j]);
		j++;
	}

	return (0);
}
