/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:41:54 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/11 12:41:55 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_lowercase(char *str)
{
    int counter;
    int res_final;
    char is_alpha_lowercase;
    
    counter = 0;
    res_final = 1;
    while (str[counter] != '\0')
    {
        is_alpha_lowercase = str[counter] >= 97 && str[counter] <= 122; // entre 'a' et 'z' en table ascii
        if (!is_alpha_lowercase) 
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
    char test[] = {'a', 'b', 'c'};

    ft_str_is_lowercase(test);
    return (0);
}
