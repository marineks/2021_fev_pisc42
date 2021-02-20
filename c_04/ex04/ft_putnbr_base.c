/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 08:14:49 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/19 16:50:15 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return (i);
}

int     check_base(char *base)
{
    unsigned int i;

    i = 0;
    while (base[i])
    {
        if (base[i] == base[i + 1])
        return (0);
    }
    return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
    int temp;
    temp = nbr;

    if (ft_strlen(base) > 1 || *base != '+' || *base != '-' || check_base(base) == 1)
    {
        if (nbr == -2147483648)
        {
            write(1, "-2147483648", 11);
        }
        else if (nbr == 0 && base[nbr] == 0)
        {
            ft_putchar(nbr + '0');
        }
        else if (nbr < 0)
        {
            ft_putchar('-');
            ft_putnbr_base(nbr * -1, base);
        }
        else if (nbr > 0)
        {
            ft_putnbr_base(nbr / ft_strlen(base), base);
            ft_putchar(base[nbr % ft_strlen(base)]);
        } 
    }
    
}

int main()
{
    char dec[] = "0123456789";
    char hex[] = "0123456789ABCDEF";
    char oct[] = "poneyvif";
    char bin[] = "01";

    ft_putnbr_base(0, dec); // expected : 0
    write(1, "\n", 1);
    ft_putnbr_base(-42, dec); // expected : -42
    write(1, "\n", 1);
    ft_putnbr_base(5, hex); // expected : 5
    write(1, "\n", 1);
    ft_putnbr_base(3, oct); // expected : e
    write(1, "\n", 1);
    ft_putnbr_base(5, bin); // expected : 101 
    write(1, "\n", 1);
    return (0);
}

// / ! \ ne fonctionne pas pour 0..
// prevoir le cas ou deux caracteres sont identiques! (trouver moyen plus court qu'une boucle)