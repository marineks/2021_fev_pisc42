/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 11:10:33 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/11 11:10:34 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// But de l'exo:
// si src ne contient que des carac alphabetiques => renvoie 1
// else if src = {} => renvoie 1
// else => renvoie 0

#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
    int counter;
    int res_final;
    char is_alpha_lowercase;
    char is_alpha_uppercase;

    counter = 0;
    res_final = 1;
    while (str[counter] != '\0')
    {
        is_alpha_lowercase = str[counter] <= 122 && str[counter] >= 97; // entre 'a' et 'z' en table ascii
        is_alpha_uppercase = str[counter] <= 90 && str[counter] >= 65 ; // entre 'A' et 'Z' en table ascii

        if ( !(is_alpha_lowercase || is_alpha_uppercase)) // si ce n'est pas de l'alphabet, mettre 0
        {
            res_final = 0;
        } 
        counter ++;
    }
    printf("%d", res_final);
    return (res_final);
    
    
}

int     main(void)
{
    char test[] = "";

    ft_str_is_alpha(test);
    return (0);
}