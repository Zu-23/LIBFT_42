/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 07:41:04 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/23 12:01:02 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	id_len;

	i = 0;
	id_len = ft_strlen(dst);
	d_len = id_len;
	s_len = ft_strlen(src);
	if (d_len > dstsize - 1 || dstsize == 0)
		return (dstsize + s_len);
	while (src[i] != '\0' && d_len < dstsize - 1)
	{
		dst[d_len] = src[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (id_len + s_len);
}
