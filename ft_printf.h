/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:18:35 by ansulist          #+#    #+#             */
/*   Updated: 2023/01/30 10:44:30 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# define HEX_BASE "0123456789abcdef"
# define HEX_BASE_UP "0123456789ABCDEF"
# define DEC_BASE "0123456789"

size_t	ft_strlen(const char *str);
void	ft_putstr(const char *str);
void	ft_putchar(const char c);
int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_base(unsigned long long nbr, char *base, int base_len);
int		ft_print_number(int nb);
int		ft_print_unsigned(unsigned int n);

#endif