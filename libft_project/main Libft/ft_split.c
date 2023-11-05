/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:49:22 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/05 14:36:42 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	separator(char c, char charset)
{
	if (c == charset)
		return (1);
	if (c == 0)
		return (1);
	return (0);
}

int	count(char *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (separator(str[i + 1], charset) == 1
			&& separator(str[i], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

void	putword(char *dest, char *src, char charset)
{
	int	i;

	i = 0;
	while (separator(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

void	putsplit(char **split, char *str, char charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (separator(str[i + j], charset) == 0)
				j++;
			split[count] = (char *)malloc(sizeof(char) * (j + 1));
			putword(split[count], str + i, charset);
			i = i + j;
			count++;
		}
	}
}

char	**ft_split(char const *str, char c)
{
	char	**data;
	int		i;

	if (!str)
		return (NULL);
	i = count((char *)str, c);
	data = (char **) malloc(sizeof(char *) * (i + 1));
	if (data == NULL)
		return (NULL);
	data[i] = 0;
	putsplit(data, (char *)str, c);
	return (data);
}
#include <stdio.h>

int main ()
{
    char const    input[1000] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
    char        delimiter = 'z';
    int    i;
    i = 0;
    char    **split = ft_split(input, delimiter);
    while (i != 2)
    {
        printf("Split[%d]:%s\n", i, split[i]);
        i++;
    }
    return (0);
}
