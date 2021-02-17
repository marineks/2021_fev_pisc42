/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:50:01 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/17 16:51:50 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int res_value;
    int sign_of_value;
    int neg_count;
    int pos_count;
    
    i = 0;
    res_value = 0;
    sign_of_value = 1;
    neg_count = 0;
    pos_count = 0;

    // definir les white spaces (i++ tant qu'on a ce genre de caract)
    while ( str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
        i++;
    // gérer les signes negatifs et positifs (si nombre impair de -, signe devient negatif - à gérer avec le modulo?)
    while (str[i] && (str[i] == '+' || str[i] == '-'))
    {
        str[i] == '-' ? neg_count++ : pos_count++;
        i++;
    }
    (neg_count > pos_count && (neg_count % 2 != 0)) ? sign_of_value = -1 : sign_of_value;
    while (str[i] && (str[i] > 47 && str[i] < 58)) // dire que si cest pas compris entre 0 et 9, arrêter de boucler
    {
        res_value = res_value * 10 + str[i] - 48; // convertir le resultat char to int
        i++;
    }
    res_value *= sign_of_value; // multiplier le resultat par le signe obtenu

    return (res_value);
}

int main()
{
    char test[] = " ---+--+1234ab567";
    printf("%d", ft_atoi(test));
    return (0);
}


// Version plus courte pour passer la norminette :

int		ft_atoi(char *str)
{
	int i;
	int res_value;
	int neg_count;

	i = 0;
	res_value = 0;
	neg_count = 0;
	while (str[i] == ' ' || str[i] == '\f'
				|| str[i] == '\n' || str[i] == '\r' 
                || str[i] == '\t' || str[i] == '\v')
		i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
			neg_count++;
        i++;
    }
	while (str[i] && (str[i] > 47 && str[i] < 58))
	{
		res_value = res_value * 10 + str[i] - 48;
		i++;
	}
	return (res_value * ((neg_count % 2 != 0) ? -1 : 1));
}
