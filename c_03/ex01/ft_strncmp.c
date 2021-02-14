/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:48:03 by marine            #+#    #+#             */
/*   Updated: 2021/02/14 22:08:21 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    int final_res;

    i = 0;
    final_res = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
        {
            final_res = (s1[i] - s2[i]);
            return (final_res);
        }
        i++;
    }
    return (final_res);
}

int main(void)
{
    char s1[] = "afrine";
    char s2[] = "1arHne";

    printf("%i eq to %i\n", ft_strncmp(s1, s2, 5), strncmp(s1, s2, 5));
    printf("%i eq to %i\n", ft_strncmp(s1, s1, 5), strncmp(s1, s1, 5));

    return (0);
}