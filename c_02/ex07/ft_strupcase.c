/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:00:26 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/11 17:00:30 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Goal : une fonction qui met en majuscule chaque lettre
// table ascii il faut rajouter +40 passer de la majuscule a la minuscule
// donc ici pour mettre en maj = -40

#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;
    int is_alpha_lowercase;

    i = 0;
    is_alpha_lowercase = str[i] >= 97 && str[i] <= 122;
    if (is_alpha_lowercase)
    {
        while (str[i] != '\0')
        {
            str[i] = str[i] - 32;
            i++;
        }
    }

    printf("%s", str);
    return (str);
}
int main(void)
{
    char test[] = {'h', 'e', 'l', 'l', 'o'};

    ft_strupcase(test);
    return (0);
}
