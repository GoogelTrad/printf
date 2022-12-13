/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:05:43 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/12 16:05:43 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(int n, char *base)
{
	int	i;

	i = 0;
	ft_conv_hex((unsigned int) n, base, &i);
	return (i);
}

void	ft_conv_hex(unsigned int n, char *base, int *i)
{
	if (n >= 16)
		ft_conv_hex(n / 16, base, i);
	ft_putchar(base[n % 16]);
	(*i)++;
}

void	ft_ptr_hex(unsigned long nb, char *base, int *len)
{
	if (nb >= 16)
		ft_ptr_hex(nb / 16, base, len);
	ft_putchar(base[nb % 16]);
	(*len)++;
}

int	ft_print_ptr(unsigned long ptr)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	ft_ptr_hex(ptr, "0123456789abcdef", &len);
	return (len);
}
