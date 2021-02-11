/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 07:47:38 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/11 07:51:18 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	// but : copie les premiers n characteres de src sur dest

	// si src < a n, on copie src puis on complete le reste de n par des \0 sur dest

	unsigned int i;

	i = 0;
	if (ft_strlen(src) >= n) // cas 1: la longueur de src >= n
	{
		while (i < n) // swappe les valeurs jusqu'a n
		{
			dest[i] = src[i]; 
			i++;
		}
		dest[i] = '\0'; // on append le \0 de fin
	}
	else 					// cas 2 : longueur de src < n
	{
		i = 0;
		while (i < ft_strlen(src)) // swappe les valeurs jusqu a la fin de src
		{
			dest[i] = src[i]; 
		}
		while (dest[i] != 0) // on reprend le i incremente et on met des \0 jusqu a la fin de dest
		{
			dest[i] = '\0';
			i++;
		}	
	}
	

	return (dest);
}

int main(void)
{
	char dest[] = "hellohellohello";
	char src[] = "oui";
	unsigned int size = 10;
	ft_strncpy(dest, src, size);

	unsigned int j = 0;
	while (dest[j] != '\0')
	{
		printf("%c", dest[j]);
		j++;
	}

	return (0);
}