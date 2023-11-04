/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquintar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:15:20 by lquintar          #+#    #+#             */
/*   Updated: 2023/11/03 17:52:59 by zeph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	long long int	i;
	long long int	j;

	if (*little == 0)
		return ((char *)big);
	while (*big != '\0' && len-- > 0)
	{
		if (*big == *little)
		{
			i = 0;
			j = 0;
			while (little[j] != 0)
			{
				if (big[j] != little[j])
					i = 1;
				j++;
			}
			j = len - j;
			if (i == 0 && j >= 0)
				return ((char *)big);
		}
		big++;
	}
	return (0);
}
