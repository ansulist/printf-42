/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:45:27 by ansulist          #+#    #+#             */
/*   Updated: 2023/01/30 10:36:55 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_reverse_array_n(int n, char array[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(array[n - i - 1]);
		i++;
	}
}

int	ft_print_base(unsigned long long nbr, char *base, int base_len)
{
	int		i;
	char	tmp;
	char	nibble[16];

	i = 0;
	if (nbr == 0)
		return (ft_print_char(base[0]));
	while (nbr > 0)
	{
		tmp = base[nbr % base_len];
		nbr /= base_len;
		if (nbr != 0 || tmp != '0')
		{
			nibble[i] = tmp;
			i++;
		}
	}
	print_reverse_array_n(i, nibble);
	return (i);
}
