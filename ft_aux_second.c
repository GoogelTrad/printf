#include "ft_printf.h"

int	ft_putstr_rev(char *str, int caps)
{
	int	i;
	int	j;

	i = ft_strlen(str);
	j = i;
	if(!caps)
	{
		ft_tolower(str);
	}
	while (--i > -1)
		write(1, &str[i], 1);
	return (j);
}

void	ft_tolower(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
}

int	ft_deci_u(int n)
{
	if (n < 0)
		n *= -1;
	ft_printf("%d", n);
	return (n);
}