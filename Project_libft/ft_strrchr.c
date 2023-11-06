/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:23:54 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/06 13:54:19 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			i;

	if (!s)
		return (NULL);
	ptr = s;
	if (c > 255)
		c = c % 256;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (ptr[i] == c)
			return ((char *)&ptr[i]);
		i--;
	}
	return (NULL);
}
