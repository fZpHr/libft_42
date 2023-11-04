/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:40:11 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/31 17:49:05 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1024);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{	
	printf("sans: %d\n", ft_isalpha('a'));
	printf("avec: %d\n", isalpha('a'));
}
