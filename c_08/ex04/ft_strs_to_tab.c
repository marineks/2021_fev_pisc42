/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:58:09 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/24 10:50:21 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		j;

	len = ft_strlen(src);
	dest = malloc(sizeof(src) * len);
	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dest;
	int			i;

	i = 0;
	if (!(dest = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i <= (ac - 1))
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i++;
	}
	dest[i].size = 0;
	dest[i].str = 0;
	dest[i].copy = 0;
	return (dest);
}
