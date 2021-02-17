/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:29:34 by marine            #+#    #+#             */
/*   Updated: 2021/02/17 21:03:22 by marine           ###   ########.fr       */
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

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

void ft_sort_params(int n, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < n)
    {
        j = i;
        while (j > 0 && ft_strcmp(argv[j - 1], argv[j]) > 0)
        {
            char *temp = argv[j - 1];
            argv[j - 1] = argv[j];
            argv[j] = temp;
            j--;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int k;

    k = 1;
    if (argc > 0)
    {
        ft_sort_params(argc - 1, argv + 1);
        while (k < argc && argv[k] != 0)
        {
            ft_print(argv[k]);
            write(1, "\n", 1);
            k++;
        }
    }
}

// "abc" "123" "ZYV"

// => les comparer avec strmcp => si s1 - s2 > 0
// +> ft_swap => print