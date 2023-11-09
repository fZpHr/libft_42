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

void	ft_putnbr_fd_base(unsigned long long int nb, int fd, char *base)
{
    size_t base_len;
    
    base_len = ft_strlen(base);

    if (nb > base_len)
    {
        ft_putnbr_fd_base(nb / base_len, fd, base);
        ft_putchar_fd(base[nb % base_len], fd);
    }
    else
        ft_putchar_fd(base[nb], fd);
}

