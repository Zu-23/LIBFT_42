/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:00:41 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/30 19:00:50 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    ptr = lst;
    if (!lst)
        return (NULL);
    while (ptr != NULL)
    {
        if (ptr->next == NULL)
            return (ptr);
        ptr = ptr->next;
    }
    return (ptr);
}
