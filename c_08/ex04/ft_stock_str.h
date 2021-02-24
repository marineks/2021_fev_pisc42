/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:11:03 by marine            #+#    #+#             */
/*   Updated: 2021/02/24 08:31:56 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
int	ft_strlen(char *str);
typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
} t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);
#endif
