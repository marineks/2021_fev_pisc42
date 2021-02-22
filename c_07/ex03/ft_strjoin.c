/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:09:33 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/22 16:05:41 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int size;
	int *tab;

	i = 0;
	// Trouver la taille d'un tableau en entier
	size = sizeof(strs);
	// Malloquer
	if (!(malloc(sizeof(strs) * ft_strlen(strs))
			return NULL;
	//Concatener l'ensemble des strs
	
	//Mettre un separateur entre chaque, sauf le dernier
	// Mettre un \0


	return (strs);
}

int main()
{
	char **strs;
	int size = ft_strlen(strs);

	strs = {"Coucou tout le monde", "ceci est un test", "pour passer mon ft join"};

}
