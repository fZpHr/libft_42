/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:49:01 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/09 15:03:57 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_countdigits(int num)
{
    long int count;
    long int nb;
    
    nb = num;
    count = 0;
    if (nb == 0)
        return 1;
    if (nb < 0)
    {
        nb = -nb;
        count++;
    }
    while (nb > 0)
    {
        nb = nb / 10;
        count++;
    }
    return (count);
}
