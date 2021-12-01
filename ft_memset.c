/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:49:35 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/09 14:55:00 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	val;

	val = (unsigned char)c;
	if (n == 0)
		return (str);
	i = 0;
	while (i < n)
	{
		*((char *)str + i) = val;
		i++;
	}
	return (str);
}
