/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:01:03 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/30 19:01:11 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    ptr = ft_lstlast(*lst);
    ptr -> next = new;
}
