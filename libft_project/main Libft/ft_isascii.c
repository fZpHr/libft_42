/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:55:59 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/30 13:00:50 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{	
	printf("sans: %d\n", ft_isascii(127));
	printf("avec: %d\n", isascii(127));
}
