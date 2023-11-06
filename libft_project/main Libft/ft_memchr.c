/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:32:23 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/01 13:44:35 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (void *)s;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main () {
   char str[6] = {0, 1, 2 ,3 ,4 ,5};
   //char *ret;
   char *et;

  // ret = ft_memchr(str, 256, 3);
   et = memchr(str, 260, 3);
 //  printf("%s\n", ret);
   printf("%s\n", et);
   printf("???");

   return(0);
}
