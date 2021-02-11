/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:34:24 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/11 12:34:26 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_numeric(char *str)
{
    int counter;
    int res_final;
    char is_str_numeric;
    

    counter = 0;
    res_final = 1;
    while (str[counter] != '\0')
    {
        is_str_numeric = str[counter] >= 48 && str[counter] <= 57 ; // entre '0' et '9' en table ascii
        if (!is_str_numeric) 
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
