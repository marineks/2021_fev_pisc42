/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 23:12:13 by marine            #+#    #+#             */
/*   Updated: 2021/02/17 08:24:23 by msanjuan         ###   ########.fr       */
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
    while (j < nb && (dest[i] != '\0' || src[j] != '\0'))
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
    char s1[30] = "rainy";
    char s2[] = "dayyss";

    ft_strncat(s1, s2, 3);
    printf("%s\n", s1);

    char s3[30] = "rainy";
    char s4[] = "dayyss";
    strncat(s3, s4, 3);

    printf("%s\n", s3);

    return (0);
}