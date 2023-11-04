/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:14:36 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/31 10:41:17 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = c;
	return (s);
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "OKSALUTATOUS";
  char str1[] = "OKSALUTATOUS";
  memset (str,126,5);
  ft_memset (str1, 126,5);
  puts (str1);
  puts (str);
  return 0;
}
