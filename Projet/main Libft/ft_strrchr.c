/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:23:54 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/31 15:29:31 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*ptr++)
	{	
	}
	while (*ptr--)
	{
		if (*ptr == c)
			return ((char *)ptr);
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "a.le.d";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("%s\n", ret);

   return(0);
}
