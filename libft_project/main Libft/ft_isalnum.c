/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:46:44 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/30 12:54:57 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z'))
		return (8);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{	
	printf("sans: %d\n", ft_isalnum('Z'));
	printf("avec: %d\n", isalnum('Z'));
}
