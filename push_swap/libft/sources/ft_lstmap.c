/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooahn <jooahn@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:59:25 by jooahn            #+#    #+#             */
/*   Updated: 2023/03/22 22:55:08 by jooahn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*head;
	t_list	*node;

	if (!lst)
		return (0);
	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	head = node;
	while (lst->next)
	{
		node->content = f(lst->content);
		node->next = (t_list *)malloc(sizeof(t_list));
		if (!(node->next))
		{
			ft_lstclear(&head, del);
			return (0);
		}
		lst = lst->next;
		node = node->next;
	}
	node->content = f(lst->content);
	node->next = 0;
	return (head);
}
