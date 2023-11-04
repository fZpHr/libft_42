/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:30:27 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/01 10:54:18 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*ptr;
	unsigned char	*ptrsrc;
	unsigned int		i;
	
	i = strlen(src) - size;
	ptr = dest;
	ptrsrc = (unsigned char *)src;
	while (size--)
	{
		ptr[i] = ptrsrc[i];
		i--;
	}
	return (dest);
}

#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char src[] = "lorem ipsum dolor sit amet"; // Array of size 100 
    char *dest = src + 1;
    
   puts (dest);
   puts (src);
    puts("str1 before memmove "); 
    puts(src); 
  
    /* Copies contents of str2 to sr1 */
    ft_memmove(dest, src, 8); 
  
    puts("\nstr1 after memmove "); 
    puts(src); 
  
    return 0; 
}
