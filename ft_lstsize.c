/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:59:48 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/12/04 17:01:53 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	if (!lst)
		return (0);
	ptr = lst;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> next;
	}
	return (count);
}
