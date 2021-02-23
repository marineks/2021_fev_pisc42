/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:48:30 by marine            #+#    #+#             */
/*   Updated: 2021/02/23 21:18:12 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str)
    {

        write(1, par[i].size, 4); // a verif, utiliser putnbr?
        write(1, "\n", 1);
        write(1, par[i].str, 1); // mettre un putstr???
        write(1, "\n", 1);
        write(1, par[i].copy, 1); // idem?
        write(1, "\n", 1);
        i++;
    }
}
