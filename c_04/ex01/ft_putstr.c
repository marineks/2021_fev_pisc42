/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:24:42 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/15 13:24:53 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return (i);
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int main(void)
{
    ft_putstr("hihihihi ca marche COUCOU");
    return (0);
}