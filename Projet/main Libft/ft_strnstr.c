/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:33:29 by zeph              #+#    #+#             */
/*   Updated: 2023/11/03 18:42:47 by zeph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

char    *ft_strnstr(const char *str, const char *to_find, size_t len)
{
        size_t  to_find_len;

        if (str == NULL && len == 0)
                return (NULL);
        to_find_len = strlen(to_find);
        if (to_find_len == 0)
                return ((char *)(str));
        while (*str != '\0' && len >= to_find_len)
        {
                if (*str == *to_find)
                {
                        if (strncmp(str, to_find, to_find_len) == 0)
                                return ((char *)(str));
                }
                str++;
                len--;
        }
        return (NULL);
}

#include <stdio.h>
#include <bsd/string.h>

int main() {
    const char *str = NULL;
    const char *to_find = "HALO";

    // Utilisation de la fonction strnstr de la bibliothèque standard C
    
    const char *result = ft_strnstr(str, to_find, strlen(str));

    if (result != NULL) {
        printf("SANS Sous-chaîne trouvée : %s\n", result);
    } else {
        printf("SANS Sous-chaîne non trouvée.\n");
    }
	const char *result1 = strnstr(str, to_find, strlen(str));

    if (result != NULL) {
        printf("AVEC Sous-chaîne trouvée : %s\n", result1);
    } else {
        printf("AVEC Sous-chaîne non trouvée.\n");
    }

    return 0;
}

