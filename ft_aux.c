/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:28:29 by cmichez           #+#    #+#             */
/*   Updated: 2022/11/28 20:02:58 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/*
int ft_putvoid(void *pt_void)
{
	uintptr_t	add;
	int			i;

	add = pt_void;
	i = 0;
	ft_putnbr(add);
}*/

