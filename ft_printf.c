/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:52 by cmichez           #+#    #+#             */
/*   Updated: 2022/11/30 15:39:53 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static va_list ap;

static int what_pourcent(char c)
{
	if (c == 'd')
		return (ft_int(va_arg(ap, int)));
	else if (c == 'c')
		return (ft_char(va_arg(ap, int)));
	else if (c == 's')
		return (ft_str(va_arg(ap, char *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (ft_void(va_arg(ap, char *)));
	else if (c == 'X')
		return (ft_hex_upper(va_arg(ap, int), 1));
	else if (c == 'x')
		return (ft_hex_upper(va_arg(ap, int), 0));
	else if (c == 'u')
		return (ft_unsigned(va_arg(ap, unsigned int)));
	else if (c == 'i')
		return (ft_int(va_arg(ap, int)));
	return (42);
}

int ft_printf(const char *list_arg, ...)
{
	//va_list ap;
	int     len_arg;
	int     i;
	int     nb_char;

	i = 0;
	nb_char = 0;
	va_start(ap, list_arg);
	len_arg = ft_strlen((char *) list_arg);
	while (i < len_arg)
	{
		if (list_arg[i] == '%')
		{
			i++;	
			nb_char += what_pourcent(list_arg[i]);
		}
		else
		{
			write(1, &list_arg[i], 1);
			nb_char++;
		}
		i++;
	}
	va_end(ap);

	return(nb_char);
}

int main(void)
{
	void *test;
	printf(" %d\n", ft_printf("Bonjour je suis %u", 4643768563872));
	//ft_printf("Bonjour je suis %s %d %c %i %u %x %X", "Celian", 654664, 'c', 42, 43, 42, 42);
}