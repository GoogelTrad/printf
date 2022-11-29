#include "ft_printf.h"

//Faire une conversion d'un nombre en hexa

static int	count_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}


int	ft_conv_hex(int n, int caps)
{
	int		j;
	int		nb_char;
	char	*base;
	char	*str;

	j = 0;
	str = malloc(sizeof(char) * count_size(n) + 1);
	base = "0123456789ABCDEF";
	nb_char = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		nb_char++;
	}
	while (n / ft_strlen(base))
	{
		str[j] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
		j++;
	}
	str[j++] = n + '0';
	nb_char += ft_putstr_rev(str, caps);
	return (nb_char);
}