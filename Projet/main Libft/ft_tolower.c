/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:24:49 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/30 15:39:18 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && 'Z' >= c)
		return (c + 32);
	else if (c == -1)
		return (-1);
	return (c);
}

#include <ctype.h>
#include <stdio.h>

int main() {

    printf( "Result: %c\n", tolower(-2));
    printf( "Result: %c\n", ft_tolower(-2));

    return EXIT_SUCCESS;
}
