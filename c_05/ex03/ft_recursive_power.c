/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 22:42:14 by marine            #+#    #+#             */
/*   Updated: 2021/02/18 23:07:43 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power == 0 && nb == 0)
        return (1);
    else if (power < 0)
        return (0);
    else if (power > 0)
        return (nb *= ft_recursive_power(nb, power - 1));
    else
        return (1);
}

int main()
{
    printf("Res : %d\n", ft_recursive_power(2, 11));
    return (0);
}

/*
0, 0 ===> 1 (d'après le sujet)
2, 3 ===> 8
4, 5 ===> 1024
2, 11 ==> 2048
2 -11 ==> 0 (d'après l'énoncé)
*/