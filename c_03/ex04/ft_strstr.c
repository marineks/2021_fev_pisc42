/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 07:31:32 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/15 08:00:26 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
    int i;
    char *res_final;

    i = 0;
    res_final = NULL;
    while (str[i] != '\0')
    {
       if (str[i] == to_find[i])
       {
           res_final = to_find;
       } 
       i++;
    }
    return (res_final);
}

int main(void)
{
    char s1[] = "bonjour";
    char s2[] = "";

    ft_strstr(s1, s2);
    printf("Ce que ma fonction fait : %s\n", s1);

    char s3[] = "bonjour";
    char s4[] = "";
    strstr(s3, s4);

    printf("Ce que la vraie fonction fait: %s\n", s3);

    return (0);
}

/*
** La fonction strstr recherche la première occurrence d'une sous-chaîne 
** (paramètre substring) dans la chaîne de caractères principale (paramètre fullString).
** Si le to_find est un empty string, il faut retourner str en entier;
** Si on ne trouve pas to_find dans str, on renvoit NULL
** Si on trouve le to_find dans str, on renvoie un ptr sur le premier carac de la 1ere occurence
** de to_find dans str
*/

