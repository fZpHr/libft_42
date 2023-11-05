/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquintar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:15:20 by lquintar          #+#    #+#             */
/*   Updated: 2023/11/04 00:09:59 by zeph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	to_find_len;

	if (str == NULL && len == 0)
		return (NULL);
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return ((char *)(str));
	while (*str != '\0' && len >= to_find_len)
	{
		if (*str == *to_find)
		{
			if (ft_strncmp(str, to_find, to_find_len) == 0)
				return ((char *)(str));
		}
		str++;
		len--;
	}
	return (NULL);
}
