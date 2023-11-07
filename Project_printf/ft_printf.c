/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:16 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/07 16:58:14 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	char	*c;
	size_t	printc;
	int	num;
	va_list	args;

	va_start(args, format);
	i = 0;
	printc = 0;
	c = (char *)format;
	while (c[i])
	{
		if (c[i] != '%')
		{
			ft_putchar_fd(c[i], 1);
			printc++;
		}
		else
		{
			i++;
			if (c[i] == 'd')
			{
				num = va_arg(args, int);
				ft_putnbr_fd(num, 1);
				printc += ft_countdigits(num);
			}
		}
		i++;
	}
	va_end(args);
	return (printc);
}

#include <stdio.h>

int	main()
{
	printf(" | Retour vrai fonction : %d\n", printf("Result : %d", 100));
	ft_printf(" | Retour ma fonction : %d\n", ft_printf("Result : %d", 100));
}
