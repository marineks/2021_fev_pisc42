/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:23:32 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/17 15:13:16 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char *argv)
{
    int i;

    i = 0;
    while (argv[i] != '\0')
    {
        i++;
    }
    return (i);
}
void    ft_putstr(char *argv)
{
    write(1, argv, ft_strlen(argv));
}

int main(int argc, char **argv)
{
    if (argc > 0)
    {
        ft_putstr(argv[0]);
        write(1, "\n", 1);
    }
}