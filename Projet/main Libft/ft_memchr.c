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
	const char	*ptr;

	ptr = s;
	if (*ptr == c)
		return ((char *)ptr);
	while (*ptr++ && n-- > 0)
	{
		if (*ptr == c)
			return ((char *)ptr);
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main () {
   char str[] = {0, 1, 2 ,3 ,4 ,5};
   char *ret;

   ret = ft_memchr(str, 0, 1);

   printf("%s\n", ret);

   return(0);
}
