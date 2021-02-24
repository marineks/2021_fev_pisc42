/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:54:02 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/23 14:57:29 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
	printf("%d\n", point->x);
	printf("%d\n", point->y);
}

int main(void)
{
	t_point point;
set_point(&point);
	return (0);
}
