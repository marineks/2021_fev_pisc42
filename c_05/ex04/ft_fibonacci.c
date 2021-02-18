/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:14:06 by marine            #+#    #+#             */
/*   Updated: 2021/02/19 00:02:08 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Écrire une fonction ft_fibonacci qui renvoie le n-ième élément de 
**  la suite de Fibonacci
**  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55…
**  ===> on ajoute les deux nombres précédents pour avoir le suivant
**  Xn = Xn-1 + Xn-2 (n etant l'index)
*/

#include <stdio.h>

int ft_fibonacci(int index)
{
    // int *x;

    // x[0] = 0;
    // x[1] = 1;
    if (index < 0)
        return (-1);
    else if (index == 0)
        return (0);
    else if (index == 1)
        return (1);
    else
        //return (x[index] = x[ft_fibonacci(index - 1)] + x[ft_fibonacci(index - 2)]);
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    int n = 2;

    printf("Fibbonacci de %d: ", n);
    printf("%d ", ft_fibonacci(n));
    return (0);
}