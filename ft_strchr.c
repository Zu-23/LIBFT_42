/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:01:45 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/17 16:10:35 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	k;

	k = (char) c;
	str = (char *) s;
	while (*str)
	{
		if (*str == k)
			return (str);
		else
			str++;
	}
	if (*str == k)
		return (str);
	else
		return (NULL);
}
