/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:00:46 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/01 12:34:48 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c1;
	unsigned int	c2;

	if (s1 == NULL && s2 == NULL)
        	return 0;
    	else if (s1 == NULL)
        	return -1;
	else if (s2 == NULL)
        	return 1;
	c1 = 0;
	c2 = 0;
	if (n == 0)
		return (0);
	while (s1[c1] != '\0' && s2[c2] != '\0' && s1[c1] == s2[c2] && \
			c1 < n - 1 && c2 < n - 1)
	{
		c1++;
		c2++;
	}
	if (s1[c1] == '\200' || (s1[c1] > '\200' && s1[c1] <= '\377'))
		return ((s1[c1] - s2[c2]) * -1);
	if (s2[c2] == '\200' || (s2[c2] > '\200' && s2[c2] <= '\377'))
		return ((s1[c1] - s2[c2]) * -1);
	return (s1[c1] - s2[c2]);
}
