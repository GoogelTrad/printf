/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:53:26 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/09 13:49:28 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_printf(const char *list_arg, ...);
int		ft_strlen(char *str);
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int 	ft_putnbr(int n);
int		ft_putstr_rev(char *str, int caps);
void    ft_conv_hex(long n, char *base, int *i);
int		ft_hex_upper(long n, int caps);
void	ft_tolower(char *str);
int		ft_unsigned(unsigned int n);
int		ft_putnbr_unsigned(unsigned int n);
int     ft_print_ptr(unsigned long ptr);
void    ft_ptr_hex(unsigned long nb, char *base, int *len);
int	    ft_put_hex(long n, char *base);


#endif