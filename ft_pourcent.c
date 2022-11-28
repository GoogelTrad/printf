/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcent.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:28:52 by cmichez           #+#    #+#             */
/*   Updated: 2022/11/28 20:01:29 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_int(int entier)
{
    return (ft_putstr(ft_itoa(entier)));
}

int ft_char(char c)
{
    return(ft_putchar(c));
}

int ft_str(char *str)
{
    return(ft_putstr(str));
}
