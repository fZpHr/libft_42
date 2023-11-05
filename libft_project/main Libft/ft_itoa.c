/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorlac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:10:53 by adorlac           #+#    #+#             */
/*   Updated: 2023/10/08 19:25:46 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_size(long long int str)
{
	long long int	i;

	i = 0;
	while (str != 0)
	{
		str /= 10;
		i++;
	}
	return (i);
}

char	*ft_writer(long long int nbr, char *str, long long int i)
{
	while (nbr != 0)
	{
		str[i] = '0' + (nbr % 10);
		nbr /= 10;
		i--;
	}
	return (str);
}

char	*nega(long long int n, char *str, long long int i, long long int len)
{
	i--;
	n = n * -1;
	str[0] = '-';
	str = ft_writer(n, str, i);
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long long int		i;
	long long int		len;
	char				*str;

	len = ft_size(n);
	if (n == 0)
		len = 1;
	if (n < 0)
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = len;
	if (n < 0)
		return (nega(n, str, i, len));
	i = len - 1;
	if (n == 0)
		str[0] = '0';
	else
		str = ft_writer(n, str, i);
	str[len] = '\0';
	return (str);
}
