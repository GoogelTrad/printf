/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_second.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:44:07 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/02 13:44:07 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_rev(char *str, int caps)
{
	int	i;
	int	j;

	i = ft_strlen(str);
	j = i;
	if (!caps)
	{
		ft_tolower(str);
	}
	while (--i > -1)
		write(1, &str[i], 1);
	return (j);
}

void	ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
}

int	ft_print_adresse(void *ptr)
{
	write(1 , "0x", 2);
	return (ft_hex_lower((long) ptr, 0) + 2);
}
