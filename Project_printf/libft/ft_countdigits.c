/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:49:01 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/08 14:49:04 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_countdigits(int num)
{
    int count;
    
    count = 0;
    if (num == 0)
        return 1;
    if (num < 0)
    {
        num = -num;
        count++;
    }
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
