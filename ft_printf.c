#include "ft_printf.h"

int ft_printf(const char *list_arg, ...)
{
    va_list ap;
    char    *arg;
    int     i;
    int     nb_args;

    i = 0;
    va_start(ap, list_arg);
    arg = (char *) list_arg;
    while (arg)
    {
        nb_args++;
        arg = va_arg(ap, char *);
    }
    va_end(ap);

    return(nb_args);
}

int main (void)
{
    ft_printf("", "Bonjour", "Coucou");
}