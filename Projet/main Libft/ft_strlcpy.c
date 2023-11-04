/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:41:42 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/30 16:08:17 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	
	j = 0;
	while (src[j] != '\0')
		j++;
	if (!size)
		return (j);
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (j);
}

#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    char *dst = malloc(20 * sizeof(char));
    char src[] = "lorem ipsum";
    printf("%zu\n", ft_strlcpy(dst, src, 3 * sizeof(char)));
    printf("%s\n", dst);
    printf("%zu\n", strlcpy(dst, src, 3 * sizeof(char)));
    printf("%s\n", dst);
}
