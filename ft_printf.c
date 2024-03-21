/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:47:45 by ansulist          #+#    #+#             */
/*   Updated: 2023/01/30 10:32:24 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(unsigned long long address)
{
	ft_putstr("0x");
	return (ft_print_base(address, HEX_BASE, 16) + 2);
}

int	ft_print_format(va_list *args, const char format)
{
	if (format == 'c')
		return (ft_print_char(va_arg(*args, int)));
	if (format == 's')
		return (ft_print_str(va_arg(*args, char *)));
	if (format == 'p')
		return (ft_print_address(va_arg(*args, unsigned long long)));
	if (format == 'd' || format == 'i')
		return (ft_print_number(va_arg(*args, int)));
	if (format == 'u')
		return (ft_print_unsigned(va_arg(*args, unsigned int)));
	if (format == 'x')
		return (ft_print_base(va_arg(*args, unsigned int), HEX_BASE, 16));
	if (format == 'X')
		return (ft_print_base(va_arg(*args, unsigned int), HEX_BASE_UP, 16));
	if (format == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (*str == '\0' || !str)
		return (0);
	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += ft_print_format(&args, str[i + 1]);
			i++;
		}
		else
			len += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
