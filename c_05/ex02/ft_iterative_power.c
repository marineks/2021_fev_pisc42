/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 22:02:31 by marine            #+#    #+#             */
/*   Updated: 2021/02/18 22:40:36 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Écrire une fonction itérative qui renvoie une puissance d'un nombre.
**  a0 = 1 // a1 = a // a2 = a * a // a3 = a * a * a // ...
*/

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int temp;

    temp = nb;
    i = 1;
    if (power == 0 && nb == 0)
    {
        return (1);
    }
    else if (power < 0)
    {
        return (0);
    }
    else
    {
        while (i < power)
        {
            temp = temp * nb;
            i++;
        }
        return (temp);
    }
}

int main()
{
    printf("Res : %d\n", ft_iterative_power(2, 11)); // 2048
    return (0);
}