/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:06:57 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/09 15:29:48 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_fd_base_unsigned(unsigned long int nb, int fd, char *base)
{
	size_t base_len;

	base_len = ft_strlen(base);
	if (nb >= base_len)
	{
		ft_putnbr_fd_base_unsigned(nb / base_len, fd, base);
		ft_putchar_fd(base[nb % base_len], fd);
	}
	else
		ft_putchar_fd(base[nb], fd);
}
