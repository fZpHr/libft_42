/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:16 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/06 17:01:33 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdarg.h>


int	ft_printf(const char *format, ...)
{
	size_t	i;
	char	c;
	size_t	j;
	va_list	args;

	va_start(args, format);
	i = 0;
	j = 0;
	c = *format;
	while (c != '%')
	{
		c++;
		if (c != '%')
			ft_putchar_fd(c, 1);
		i++;
	}
	c++;
	if (c == 'd')
	{
		j = va_arg(args, int);
		i = i + 
 	}
}

