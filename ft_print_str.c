/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:46:30 by ansulist          #+#    #+#             */
/*   Updated: 2023/01/27 15:46:31 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}
