/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:09:21 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/17 11:48:19 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t cnt)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < cnt)
	{
		*((unsigned char *) dest + i) = *((unsigned char *) src + i);
		i++;
	}
	return (dest);
}
