/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 08:52:39 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/22 09:18:34 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	 	*dest;
	int 		len;
	int 		j;

	len = ft_strlen(src);
	dest = malloc(sizeof(src) * len);
	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	write(1, src, len);
	write(1, "\n" ,1);
	write(1, dest, ft_strlen(dest));
	return (dest);
}

int main()
{
	char test[] = "zaluuuuut";

	ft_strdup(test);
	//free(test);
	write(1, "\n", 1);
	write(1, strdup(test), ft_strlen(test));
	return (0);
}
