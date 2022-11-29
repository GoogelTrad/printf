#ifndef PRINTF_H
 #define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>


int     ft_printf(const char *list_arg, ...);
int     ft_strlen(char *str);
int     ft_atoi(const char *nptr);
char	*ft_itoa(int n);
int     ft_putstr(char *str);
int     ft_putchar(char c);
int     ft_int(int entier);
int     ft_char(char c);
int     ft_str(char *c);
void	ft_putnbr(int n);
int		ft_putvoid(void *pt_void);
int		ft_putstr_rev(char *str, int caps);
int		ft_conv_hex(int n, int caps);
int		ft_hex_upper(int n, int caps);
void	ft_tolower(char *str);
int		ft_hex_lower(int n, int caps);
int		ft_deci_u(int n);
int		ft_unsigned(int n);
int		ft_void(void *pt_void);
int		ft_putnbr_unsigned(unsigned int n);


#endif