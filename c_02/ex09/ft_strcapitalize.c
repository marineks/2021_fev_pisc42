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
    int j;

    j = 0;
        while (str[j] != '\0')
        {
            if (str[j] > 64 && str[j] < 91)
            {
                str[j] = str[j] + 32;
            }
            j++;
        }
    printf("To lowercase : %s", str);
    printf("\n");
    return (str);
}

char    ft_strcapitalize(char *str)
{
    int i;
    int is_alpha;
    int is_not_alpha;

    i = 0;
    is_alpha = ((str[i] > 96 && str[i] < 123 ) || (str[i] > 64 && str[i] < 91));
    is_not_alpha = ((str[i - 1] > 31 && str[i - 1] < 65) || (str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122);
    
    // appliquer le to lowercase sur tous les caracteres alphabetiques
    ft_strlowcase(str);

    while (str[i] != '\0')
    {
        // dire que si ca precede un caract non alpha mettre la majuscule 
        if (i == 0 || (((str[i - 1] > 31 && str[i - 1] < 48) || (str[i - 1] > 57 && str[i - 1] < 65) || (str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122) && ((str[i] > 96 && str[i] < 123 ) || (str[i] > 64 && str[i] < 91)))) 
        {
            // si cest le cas, on applique le toUppercase a str i.
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("To capitalize : %s", str);   

    return (*str);
}

int main()
{
    char test[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};

    ft_strcapitalize(test);
    return(0);
}