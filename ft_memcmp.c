/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:14:45 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/17 14:30:33 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *) str1 + i) - *((unsigned char *) str2 + i) != 0)
			return (*((unsigned char *) str1 + i)
				- *((unsigned char *) str2 + i));
		i++;
	}
	return (0);
}
