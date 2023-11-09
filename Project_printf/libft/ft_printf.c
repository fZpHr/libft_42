/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:16 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/09 15:52:08 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	count;
	int		num;
	char	*str;
	va_list	args;
	void *ptr;
	char *hexa_lower;
	char *hexa_upper;
	char	*base10_number;
	int	error;

	hexa_lower = "0123456789abcdef";
	hexa_upper = "0123456789ABCDEF";
	base10_number = "0123456789";

	va_start(args, format);
	error = 0;
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%' && error < 2)
		{
			ft_putchar_fd(format[i], 1);
			count++;
			if (format[i] == '\0')
				error++;
		}
		else
		{
			if (format[i+1] == 'd' || format[i+1] == 'i')
			{
				num = va_arg(args, int);
				ft_putnbr_fd(num, 1);
				count += ft_countdigits(num);
				i++;
			}
			else if (format[i+1] == 'c')
			{
				num = va_arg(args, int);
				ft_putchar_fd(num, 1);
				count += 1;
				i++;
			}
			else if (format[i+1] == 's')
			{
				str = va_arg(args, char *);
				ft_putstr_fd(str, 1);
				count += ft_strlen(str);
				i++;
			}
			else if (format[i+1] == 'p')
			{
				ptr = va_arg(args, void *);
				if ((int *)ptr == 0)
				{
					ft_putstr_fd("(nil)", 1);
					count += 5;
				}
				else
				{
				ft_putstr_fd("0x", 1);
				ft_putnbr_fd_base((unsigned long long int)ptr, 1, hexa_lower);
				count += ft_countdigits_base((unsigned long long int)ptr, 16) + 3;
				}
				i++;
			}
			else if (format[i] == '%')
			{
				ft_putchar_fd(format[i], 1);
				count++;
			}
			if (format[i+1] == '\n')
			{
				ft_putchar_fd('\n', 1);
			}
		}
		i++;
	}
	if (error > 1)
		count = -1;
	va_end(args);
	return (count);
}
