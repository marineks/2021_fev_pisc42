/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:02:00 by marine            #+#    #+#             */
/*   Updated: 2021/02/18 21:34:00 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Écrire une fonction itérative qui renvoie le résultat de
**  l’opération factorielle à partir du nombre passé en paramètre.
**  1! = 1
**  2! = 1 × 2 = 2
**  3! = 1 × 2 × 3 = 6
**  4! = 1 × 2 × 3 × 4 = 24
**  10! = 1 × 2 × 3 × 4 × 5 × 6 × 7 × 8 × 9 × 10 = 3 628 800 
*/

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int temp;

    i = 1;
    temp = nb;
    if (temp == 1)
    {
        return (1);
    }
    else if (temp > 0)
    {
        while (i < temp)
        {
            printf("Index : %d\n", i);
            nb *= (temp - i);
            printf("Res : %d\n", nb);
            i++;
        }
        return (nb);
    }
    else
    {
        return (0);
    }
}

int main()
{
    ft_iterative_factorial(3);
    return (0);
}