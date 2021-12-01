/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:01:42 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/30 19:01:52 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *tmp;

    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst,del);
        *lst = tmp;
    }
    *lst = NULL;
}
