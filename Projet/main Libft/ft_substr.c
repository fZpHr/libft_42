/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:18:24 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/04 11:09:46 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		i;
	size_t		s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = strlen(s);
	if (!s || start >= s_len)
	{
		ptr = (char *)malloc(1);
		if (ptr)
			ptr[0] = '\0';
		return (ptr);
	}
	if (len > s_len - start)
		len = s_len - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}


int main()
{
	char* str;

	str = ft_substr("salualed", 0, 8);
	printf("%s\n", str);

	return 0;
}
