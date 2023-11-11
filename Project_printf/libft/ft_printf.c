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
	unsigned int	num_unsigned;
	char	*str;
	va_list	args;
	void *ptr;
	char *hexa_lower;
	char *hexa_upper;
	int	error;

	va_start(args, format);
	if (format == NULL) 
	{
        	va_end(args);
        	return -1;
        }
	error = 0;
	i = 0;
	count = 0;
	hexa_lower = "0123456789abcdef";
	hexa_upper = "0123456789ABCDEF";
	while (format[i])
	{
		if (format[i] != '%' )
		{
			ft_putchar_fd(format[i], 1);
			count++;
			if (format[i] == '\0')
				error++;
		}
		else
		{
			if (format[i+1] == 'd')
			{
				num = va_arg(args, int);
				ft_putnbr_fd(num, 1);
				count += ft_countdigits(num);
				i++;
			}
			if (format[i+1] == 'i')			{
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
				if (!str)
				{
					ft_putstr_fd("(null)", 1);
					count += 6;
				}
				else
				{
					ft_putstr_fd(str, 1);
					count += ft_strlen(str);
				}
				i++;
			}
			else if (format[i+1] == 'p')
			{
				ptr = va_arg(args, void *);
				if (ptr == 0)
				{
					ft_putstr_fd("(nil)", 1);
					count += 5;
				}
				else
				{
					ft_putstr_fd("0x", 1);
					ft_putnbr_fd_base_unsigned((unsigned long long int)ptr, 1, hexa_lower);
					count += ft_countdigits_base_unsigned((unsigned long long int)ptr, 16) + 3;
				}
				i++;
			}
			else if (format[i+1] == 'u')
			{
				num = va_arg(args, int);
				ft_putnbr_fd_unsigned((unsigned int)num, 1);
				count += ft_countdigits_unsigned((unsigned int)num);
				i++;
			}
			else if (format[i+1] == 'x')
			{
				num_unsigned = va_arg(args, int);
				ft_putnbr_fd_base_unsigned(num_unsigned, 1, hexa_lower);
				count += ft_countdigits_base_unsigned(num_unsigned, 16);
				num = num_unsigned;
				if (num > 0 || num < 0)
					count++;
				i++;
			}
			else if (format[i+1] == 'X')
			{
				num_unsigned = va_arg(args, int);
				ft_putnbr_fd_base_unsigned(num_unsigned, 1, hexa_upper);
				count += ft_countdigits_base_unsigned(num_unsigned, 16);
				num = num_unsigned;
				if (num > 0 || num < 0)
					count++;
				i++;
			}

			else if (format[i] == '%')
			{
				if ((format[i+1] == '\0' && format[i-1] == '\0') || format[i+1] == '\0' )
					error++;
				else if (format[i+1] == '%')
				{
					ft_putchar_fd(format[i], 1);
					count++;
					i++;
				}
				else if (format[i+1] != 'c' && format[i+1] != 's' && format[i+1] != 'p' && format[i+1] != 'd' && format[i+1] != 'i' && format[i+1] != 'u' && format[i+1] != 'x' && format[i+1] != 'X' )
				{
					ft_putchar_fd(format[i], 1);
						count++;
				}

			}
			if (format[i+1] == '\n')
			{
				ft_putchar_fd('\n', 1);
			}
		}
		i++;
	}
	if (error == 1)
		count = -1;
	va_end(args);
	return (count);
}
