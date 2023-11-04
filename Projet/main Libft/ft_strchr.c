/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:02:17 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/31 15:21:22 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	if (*ptr == c)
		return ((char *)ptr);
	while (*ptr++)
	{
		if (*ptr == c)
			return ((char *)ptr);
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "test.dea.aaa.aa.a";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("%s\n", ret);

   return(0);
}
