/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:03:38 by marine            #+#    #+#             */
/*   Updated: 2021/02/19 21:46:16 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// exemple : "rien" "cette phrase ne cache rien" => rienct phras
#include <stdio.h>
#include <unistd.h>

void ft_union(char *s1, char *s2)
{
    // concatener avec strcat fait maison
    int i;
    int j;
    int k;
    int l;
    int checked;

    i = 0;
    while (s1[i])
    {
        i++;
    }
    j = 0;
    while (s2[j])
    {
        s1[i] = s2[j];
        j++;
        i++;
    }
    s1[i] = '\0';

    printf("Ceci est la nouvelle chaine de s1 : %s\n", s1);
    // scanner la string s1 et retenir que les lettres en double / checked variable et si checked = 1 => on l'imprime
    k = 1;

    while (s1[k])
    {
        checked = 0; // valeur par défaut
        l = 0;
        while (l <= k)
        {
            if (s1[l] == s1[k])
            {
                checked = 1; // aka si les caractères n et n+1 sont les mêmes,
            }                // on toggle checked de façon à ce que la condition suivante ne soit pas remplie
            if (checked == 0)
            {
                write(1, (s1 + k), 1);
            }
            l++;
        }
        k++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_union(av[1], av[2]);
    }
    else if (ac != 3)
    {
        write(1, "\n", 1);
    }
    return (0);
}

// lien à check pour se dbloquer https://stackoverflow.com/questions/31489339/display-duplicates-in-array-in-c