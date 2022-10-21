/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:26:22 by mbelouar          #+#    #+#             */
/*   Updated: 2022/10/21 19:49:06 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fill(const char *form, va_list ptr, int i)
{
	int	len;

	len = 0;
	if (form[i] == 'c')
		len += ft_putchar(va_arg(ptr, int));
	else if (form[i] == 'd' || form[i] == 'i')
		len += ft_putnbr(va_arg(ptr, int));
	else if (form[i] == 's')
		len += ft_putstr(va_arg(ptr, char *));
	else if (form[i] == 'u')
		len += ft_putnbr_u(va_arg(ptr, unsigned int));
	else if (form[i] == 'x')
		len += ft_hex(va_arg(ptr, unsigned int), "0123456789abcdef");
	else if (form[i] == 'X')
		len += ft_hex(va_arg(ptr, unsigned int), "0123456789ABCDEF");
	else if (form[i] == '%')
		len += write(1, "%", 1);
	else if (form[i] == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_hex(va_arg(ptr, unsigned long), "0123456789abcdef");
	}
	return (len);
}

int	ft_printf(const char *form, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	len = 0;
	va_start(ptr, form);
	while (form[i])
	{
		if (form[i] == '%')
		{
			i += 1;
			len += ft_fill(form, ptr, i);
		}
		else
			len += ft_putchar(form[i]);
		i++;
	}
	va_end(ptr);
	return (len);
}
