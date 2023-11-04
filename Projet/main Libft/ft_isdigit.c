/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:40:31 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/31 11:08:48 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (2048);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{	
	printf("sans: %d\n", ft_isdigit('z'));
	printf("avec: %d\n", isdigit('z'));
}

