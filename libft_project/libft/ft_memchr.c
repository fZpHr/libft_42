/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:32:23 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/01 12:40:38 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;

	ptr = s;
	if (*ptr == c)
		return ((char *)ptr);
	while (*ptr++ && n-- > 1)
	{
		if (*ptr == c)
			return ((char *)ptr);
	}
	return (NULL);
}
