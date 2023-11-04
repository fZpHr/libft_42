/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:17:33 by hbelle            #+#    #+#             */
/*   Updated: 2023/11/04 13:55:38 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;

	if (!lst)
		return (NULL);
	while (lst != NULL)
		new = ft_lstnew(f(lst->content));
	ptr = new;
	lst = lst->next;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			ft_lstclear(&ptr, del);
		ft_lstadd_back(&ptr, new);
	}
	return (new);
}
