/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:04:57 by rkawahar          #+#    #+#             */
/*   Updated: 2024/04/25 19:10:56 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_print_itoa(int num, int len);
int	ft_print_uint(unsigned int num, int len);
int	ft_to_hexaddress(unsigned long int num, int len);
int	ft_to_hex(unsigned int num, int len);
int	ft_to_upperhex(unsigned int num, int len);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_print_address(unsigned long address);
int	ft_mini_printf(const char *str, size_t i, va_list ap);
int	ft_printf(const char *str, ...);

#endif