/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 07:58:08 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/12 07:58:10 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    int is_alpha_uppercase;

    i = 0;
    is_alpha_uppercase = str[i] <= 90 && str[i] >= 65;
    if (is_alpha_uppercase)
    {
        while (str[i] != '\0')
        {
            str[i] = str[i] + 32;
            i++;
        }
    }
    printf("%s", str);
    return (str);
}

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

char    ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    // appliquer le to lowercase
    ft_strlowcase(str);

    // dire que des que ca precede un caract non alpha numerique mettre la majuscule 
    while (str[i] != '\0')
    {
        if (str[i - 1] ) // ici il faudra que str i - 1 soit un carac non alphanumerique (stocker ca dans une variable?)
        {
            // si cest le cas, on applique le toUppercase a str i.
        }
}
}

int main()
{
    char test[] = {"bonJour, cA va bieN?"};

    ft_strcapitalize(test);
    return(0);
}