/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:16 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/09 14:41:06 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/ft_printf.h"

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
	int	percent_count;

	hexa_lower = "0123456789abcdef";
	hexa_upper = "0123456789ABCDEF";

	va_start(args, format);
	error = 0;
	i = 0;
	count = 0;
	if (format == NULL) 
	{
        	va_end(args);
        	return -1;
        }
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			count++;
			if (format[i+1] == '%')
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
				if ((int *)ptr == 0)
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
				if (format[i+1] == '\0' && format[i-1] == '\0'|| format[i+1] == '\0')
					error++;
				if (format[i+1] == '%')
				{
					ft_putchar_fd(format[i], 1);
					count++;
					i++;
				}
				/* if (format[i+1] != '%' && format[i+1] != 'c' && format[i+1] != 's' && format[i+1] != 'p' && format[i+1] != 'd' && format[i+1] != 'i' && format[i+1] != 'u' && format[i+1] != 'x' && format[i+1] != 'X' && error > 1)
					{
						ft_putchar_fd(format[i], 1);
						count++;
					}*/
			}
			else if (format[i+1] == '\n')
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

#include <stdio.h>
#include <limits.h>

int	main()
{
	printf("=============================================================\n");
	printf("Avec c : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf("%c", 'c'));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("%c", 'c'));
	printf("=============================================================\n");
	printf("Avec s : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf("%s", NULL));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("%s", NULL));
	printf("=============================================================\n");

	printf("Avec p : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf("%p", "-1000"));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("%p", "-1000"));
	printf("=============================================================\n");

	printf("Avec d : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf("%d", -1));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("%d", -1));
	printf("=============================================================\n");

	printf("Avec i : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf("%i", INT_MIN));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("%i", INT_MIN));
	printf("=============================================================\n");

	printf("Avec u : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf("%u", -1));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("%u", -1));
	printf("=============================================================\n");
	
	printf("Avec x : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf("%x", 0));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("%x", 0));
	printf("=============================================================\n");
	
	printf("Avec X : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf("%", 0));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("%", 0));
	printf("=============================================================\n");
	
		printf("Avec % : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf(" %%%% "));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf(" %%%% "));
	ft_printf("=============================================================\n");
	
	printf("Test random : \n\n");	

	printf(" | Retour vrai fonction : %d\n", printf(NULL));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf(NULL));
	ft_printf("=============================================================\n");
	
}
