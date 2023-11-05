/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:52:15 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/03 15:12:03 by zeph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*ptr;

	if (!dest || !n == src)
		return (dest);
	ptr = dest;
	while (size--)
	{
		*ptr++ = *(char*)src++;
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   // int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
  //  int length = sizeof( int ) * 5;

    /* Memory allocation and copy */
  //  copy = (int *) malloc( length );
   ft_memcpy( copy, NULL, 5 );

    /* Display the copied values */
int	i = 0;

	while (i < 5)
    {
       printf( "%d ", copy[ i ] );
	   i++;
    }
    printf( "\n" );

    free( copy );

    return EXIT_SUCCESS;
}
