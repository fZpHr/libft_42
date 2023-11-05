/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:17:49 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/01 13:17:56 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
        char    *ptr;
        unsigned int    i;
		unsigned int	j;

        i = 0;
		j = strlen(s1) + strlen(s2);
        if (!s1 || !s2 || !(ptr = malloc(sizeof(char *) * j + 1)))
                return (NULL);
        while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
		j = 0;
        while (s2[j])
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
        ptr[i] = '\0';
        return (ptr);
}

int main()
{
        char* str;

        str = ft_strjoin("lorem ipsum", "dolor sit amet");
        printf("%s\n", str);

        return 0;
}
