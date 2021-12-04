/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:52:13 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/12/04 16:57:08 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_lst;
	t_list	*elem;

	if (!lst || !f || !del)
		return (NULL);
	head_lst = ft_lstnew(f(lst->content));
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&head_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&head_lst, elem);
		lst = lst->next;
	}
	return (head_lst);
}
