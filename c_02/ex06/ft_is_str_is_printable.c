/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_str_is_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:56:02 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/11 12:56:04 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_printable(char *str)
{
    int counter;
    int res_final;
    char is_str_printable;
    
    counter = 0;
    res_final = 1;
    is_str_printable = str[counter] >= 32 && str[counter] <= 126 ;
    while (str[counter] != '\0')
    {
         // en table ascii (https://learn.sparkfun.com/tutorials/ascii/all)
        if (!is_str_printable) 
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
    char test[] = {'a', '?', 'c'};

    ft_str_is_printable(test);
    return (0);
}
