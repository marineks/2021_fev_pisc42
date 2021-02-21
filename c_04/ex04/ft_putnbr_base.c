/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 08:14:49 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/21 09:25:30 by msanjuan         ###   ########.fr       */
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
    unsigned int j;

    i = 0;
    if (ft_strlen(base) <= 1)
    {
        return (0);
    }
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-')
        {
            return (0);
        }
        i++;
    }
    i = 0;
    while (base[i] != '\0')
    {
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j] ||base[0] == '\0' || base[1] == '\0' ||  base[i] == '+' || base[i] == '-')
            {
                return (0);
            }
            j++;
        }
        
        i++;
    }
    return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
    int long temp;

    temp = nbr;
    if (check_base(base) == 1)
    {
        if (temp < 0)
        {
            ft_putchar('-');
            temp  = -temp;
        }
        if (temp > ft_strlen(base))
        {
            ft_putnbr_base(temp / ft_strlen(base), base);
            //ft_putchar(base[temp % ft_strlen(base)]);
            ft_putnbr_base(temp % ft_strlen(base), base);
        } 
        else
        {
            ft_putchar(nbr + 48);
        }
        
    }
    
}

int main()
{
    char dec[] = "0123456789";
    char hex[] = "0123456789ABCDEF";
    char oct[] = "poneyvif";
    char bin[] = "01";
    char trash[] = "4589";
    char trash2[] = "";

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
    write(1, "t\n", 2);
    ft_putnbr_base(0, trash); // expected : 0
   write(1, "v\n", 2);
    ft_putnbr_base(0, trash2); // expected : 0

    return (0);
}

// / ! \ ne fonctionne pas pour 0..
// prevoir le cas ou deux caracteres sont identiques! (trouver moyen plus court qu'une boucle)