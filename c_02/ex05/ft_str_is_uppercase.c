/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:51:18 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/11 12:51:31 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
    int counter;
    int res_final;
    char is_alpha_uppercase;
    
    counter = 0;
    res_final = 1;
    while (str[counter] != '\0')
    {
        is_alpha_uppercase = str[counter] <= 90 && str[counter] >= 65 ; // entre 'A' et 'Z' en table ascii
        if (!is_alpha_uppercase) 
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

    ft_str_is_uppercase(test);
    return (0);
}

