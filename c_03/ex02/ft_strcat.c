/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 22:15:31 by marine            #+#    #+#             */
/*   Updated: 2021/02/14 23:09:08 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
** Concatenation de dest et src, ecrasant le \0 de dst. dst doit être assez grand pour le res
*/

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char s1[] = "rainy";
    char s2[] = "dayys";

    ft_strcat(s1, s2);
    printf("%s\n", s1);

    char s3[] = "rainy";
    char s4[] = "dayys";
    strcat(s3, s4);

    printf("%s\n", s3);

    return (0);
}