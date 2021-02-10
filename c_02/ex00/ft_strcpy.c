/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:28:49 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/10 17:18:34 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int j;

	j = 0;
	while (src[j] != '\0') // tant que l'on arrive pas à la dernière case
	{
		dest[j] = src[j]; // on copie src dans dest
		j++;
	}
	dest[j] = '\0'; // j'essaie de rajouter le \0 final à la fin de la loop
	return (dest);
}

int main(void)
{
	char dest[] = "hello";
	char src[] = "chnge";
	ft_strcpy(dest, src);

	int i = 0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}

	return (0);
}