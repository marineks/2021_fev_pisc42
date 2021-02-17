/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:14:19 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/17 15:34:19 by msanjuan         ###   ########.fr       */
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
void    ft_print(char *argv)
{
        write(1, argv, ft_strlen(argv));
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc > 0)
    {
        while (argv[i] != 0)
        {
            ft_print(argv[i + 1]);
            write(1, "\n", 1);
            i++;
        }
        
    }
}