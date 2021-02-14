/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 23:12:13 by marine            #+#    #+#             */
/*   Updated: 2021/02/14 23:17:00 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (j < nb)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    if (nb)
    {
        dest[i] = '\0';
    }
    return (dest);
}

int main(void)
{
    char s1[] = "rainy";
    char s2[] = "dayyss";

    ft_strncat(s1, s2, 2);
    printf("%s\n", s1);

    char s3[] = "rainy";
    char s4[] = "dayyss";
    strncat(s3, s4, 2);

    printf("%s\n", s3);

    return (0);
}