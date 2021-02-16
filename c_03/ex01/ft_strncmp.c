/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:48:03 by marine            #+#    #+#             */
/*   Updated: 2021/02/16 14:07:36 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
    char s1[] = "abc@";
    char s2[] = "abcdefghi";

    printf("%d eq to %d\n", ft_strncmp(s1, s2, 5), strncmp(s1, s2, 4));
    printf("%i eq to %i\n", ft_strncmp(s1, s1, 5), strncmp(s1, s1, 4));

    return (0);
}