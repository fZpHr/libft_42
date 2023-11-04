/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:37:24 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/30 13:47:25 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = 0;
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "OKSALUTATOUS";
  char str1[] = "OKSALUTATOUS";
  printf("%s\n", bzero(str,5));
  printf("%s\n", ft_bzero(str1, 5));
  return 0;
}
