/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:31:47 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/30 15:39:13 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && 'z' >= c)
		return (c - 32);
	else if (c == -1)
		return (-1);
	return (c);
}

#include <ctype.h>
#include <stdio.h>

int main() {

    printf( "Result: %c\n", toupper('A'));
    printf( "Result: %c\n", ft_toupper('A'));

    return EXIT_SUCCESS;
}