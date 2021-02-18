/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:36:03 by marine            #+#    #+#             */
/*   Updated: 2021/02/18 22:00:19 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Écrire une fonction récursive qui renvoie le résultat de
**  l’opération factorielle à partir du nombre passé en paramètre.
*/

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 0 || nb < 0)
        return (0);
    else if (nb == 1)
        return (1);
    else
        return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
    printf("Res : %d\n", ft_recursive_factorial(9));
    return (0);
}