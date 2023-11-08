/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:04:46 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/08 15:45:05 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd_base(int nb, int fd, char *base)
{
	unsigned long long int	a;
	unsigned long long int	b;

	a = nb;
	if (a < 0)
	{
		a = a * (-1);
		write(fd, "-", 1);
	}
	if (a <= 9)
	{
		a = a + 48;
		if (ft_strlen(base) < 11)
			b = a % 10;
		else
			b = a % 16;
		write(fd, &base[b], 1);
	}
	else
	{
		ft_putnbr_fd_base((a / 10), fd, base);
		a = a % 10 + 48;
		if (ft_strlen(base) < 11)
			b = a % 10;
		else
			b = a % 16;
		write(fd, &base[b], 1);
	}
}
