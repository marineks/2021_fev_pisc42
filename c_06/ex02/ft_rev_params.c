/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:10:28 by marine            #+#    #+#             */
/*   Updated: 2021/02/17 19:19:22 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *argv)
{
    int i;

    i = 0;
    while (argv[i] != '\0')
    {
        i++;
    }
    return (i);
}
void ft_print(char *argv)
{
    write(1, argv, ft_strlen(argv));
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 0) // 4
    {
        while (i < ft_strlen(*argv) - 1 && argv[i] != 0)
        {
            ft_print(argv[argc - 1]);
            write(1, "\n", 1);
            i++;
            argc--;
        }
    }
}