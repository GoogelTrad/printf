#ifndef PRINTF_H
 #define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
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


#endif