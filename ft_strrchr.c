/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:24:06 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/17 16:13:53 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	k;
	char	*str;

	k = (char) c;
	str = (char *) s;
	len = ft_strlen(str);
	if (k == 0)
		return ((str + len));
	while (*str != str[len--])
	{
		if (str[len] == k)
			return ((str + len));
	}
	return (NULL);
}
