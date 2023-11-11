/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:49:01 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/09 15:04:06 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_countdigits_base_unsigned(unsigned long int nb, unsigned int base)
{
	int	count;
    
   	count = 0;
   	if (nb == 0)
        	return 1;
	while (nb >= base)
	{
		nb /= base;
		count++;
	}
	return count;
}
