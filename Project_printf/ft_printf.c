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
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	size_t	i;
	char	*c;
	size_t	j;
	va_list	args;

	va_start(args, format);
	i = 0;
	j = 0;
	c = *format;
	while (c[i] != '%')
	{
		c++;
		if (c != '%')
			ft_putchar_fd(c, 1);
		i++;
	}
	c++;
	if (c == 'd')
	{
		j = (int)va_arg(args, int);
		ft_putnbr_fd(j, 1);
	}
	va_end(args);
	return (0);
	//if (c == 's')
}

#include <stdio.h>

int	main()
{
	printf(" | Retour vrai fonction : %d\n", printf("Result : %d", 150));
	printf(" | Retour ma fonction : %d\n", ft_printf("Result : %d", 150));
}
