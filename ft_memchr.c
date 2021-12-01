/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:52:36 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/17 11:59:15 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const void	*dest;

	i = 0;
	while (i < n)
	{
		if (*((char *) str + i) == (char) c)
		{
			dest = str + i;
			return ((void *) dest);
		}
		i++;
	}
	return (NULL);
}
