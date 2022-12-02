/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:53:26 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/02 17:13:28 by cmichez          ###   ########.fr       */
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
int		ft_int(int entier);
int		ft_char(char c);
int		ft_str(char *c);
void	ft_putnbr(int n);
int		ft_putvoid(void *pt_void);
int		ft_putstr_rev(char *str, int caps);
int		ft_conv_hex(long n, int caps);
int		ft_hex_upper(long n, int caps);
void	ft_tolower(char *str);
int		ft_unsigned(unsigned int n);
int		ft_void(void *pt_void);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_print_adresse(void *ptr);

#endif