/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:26:22 by mbelouar          #+#    #+#             */
/*   Updated: 2022/10/16 20:20:33 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>
#include <stdarg.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (len);
}

int	ft_printf(const char *form, ...)
{
  int     i;
  va_list ptr;

  i = 0;
  va_start(ptr, form);
  while (c[i])
  {
    if (form[i] == '%' && form[i + 1] == 'c')
	{
		char	caractere = va_arg(ptr, int);
		ft_putchar(caractere);
	}
	else if (form[i] == '%' && form[i + 1] == 'd')
	{
		int		entier = va_arg(ptr, int);
		ft_putnbr(entier);
	}
	i++;
  }

  va_end(ptr);
  return 0;
}
#include <limits.h>
int main()
{
	int a = 777;
	ft_printf("%d",55);
	printf("\n%d",ft_putnbr(INT_MIN));
	printf("\n");
	ft_printf("%c",'M');
	return 0;
}
