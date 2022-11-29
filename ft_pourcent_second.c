#include "ft_printf.h"

int	ft_hex_lower(int n, int caps)
{
	return (ft_conv_hex(n, caps));
}

int	ft_unsigned(unsigned int n)
{
	return (ft_putnbr_unsigned(unsigned int n));
}