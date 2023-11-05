/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:41:03 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/30 16:58:12 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size + 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	return (i + j);
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char dst[8] = "salouga";
    char src[] = "qwertyuiop";
   // ft_strlcpy(dst, src, 5 * sizeof(char));
    ft_strlcat(dst, src, 10 * sizeof(char));
    printf("%s", dst);
}
