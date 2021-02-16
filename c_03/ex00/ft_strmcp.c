/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmcp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:37:26 by marine            #+#    #+#             */
/*   Updated: 2021/02/16 14:08:02 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char s1[] = "marine";
	char s2[] = "marHne";

	printf("%i eq to %i\n", ft_strcmp(s1, s2), strcmp(s1, s2)); // expected : - 11
	printf("%i eq to %i\n", ft_strcmp(s1, s1), strcmp(s1, s1));

	return (0);
}

// ça compare caractère par caractère les deux string et quand ils sont différents,
// elle renvoit la diff ASCII entre le caractère de la première string et celui de
// la 2eme
