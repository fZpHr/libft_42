/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:23:54 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/31 18:09:48 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	size_t		i;

	ptr = s;
	if (*ptr == c)
		return ((char *)ptr);
	i = ft_strlen(s);
	while (i > 0)
	{
		if (ptr[i] == c)
			return ((char *)&ptr[i]);
		i--;
	}
	return (NULL);
}
