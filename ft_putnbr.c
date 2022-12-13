/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:43:57 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/02 13:43:57 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		if (n < 0)
		{
			i += ft_putchar('-');
			n *= -1;
		}
		if (n >= 10)
		{
			i += ft_putnbr(n / 10);
			i += ft_putnbr(n % 10);
		}
		else
			i += ft_putchar(n + '0');
	}
	return (i);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_putnbr_unsigned(n / 10);
		i += ft_putnbr_unsigned(n % 10);
	}
	else
		i += ft_putchar(n + '0');
	return (i);
}
