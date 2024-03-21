/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:46:17 by ansulist          #+#    #+#             */
/*   Updated: 2023/01/27 15:59:44 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_divide(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
			return (ft_print_str("-2147483648"));
		len += ft_print_char('-');
		nbr = nbr * -1;
	}
	if (nbr != 0)
	{
		len += ft_divide(nbr / 10);
		len += ft_print_char((nbr % 10) + '0');
	}
	return (len);
}

int	ft_print_number(int nbr)
{
	if (nbr == 0)
		return (ft_print_char('0'));
	return (ft_divide(nbr));
}
