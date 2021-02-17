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


// NB : n c'est toujours la longueur de dest!!!! donc si src = n = remplace. si src > n : remplace jusqua la fin de dest
// si src < n, on remplace le reste par des \0. 

#include <stdio.h>

#include <stdio.h>

char *ft_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0') // tant que l'on arrive pas à la dernière case et que i < n
	{
		dest[i] = src[i]; // on copie src dans dest
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
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