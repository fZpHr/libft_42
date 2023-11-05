/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:15:59 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/05 16:33:14 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!lst)
		return ;
	ptr = 0;
	while (ptr != NULL)
	{
		ptr = (*lst)->next;
		del((*lst)->content);
		*lst = ptr;
		free(lst);
	}
	*lst = NULL;
}
