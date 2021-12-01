/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:23:11 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/23 10:57:20 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	cout;
	size_t	len;
	char	*s;

	s = (char *) str;
	i = 0;
	cout = 0;
	len = ft_strlen(to_find);
	if (s[i] == '\0' && to_find[i] == '\0')
		return (&s[i]);
	while (s[i])
	{
		while (s[i + cout] == to_find[cout] && to_find[cout] && (i + cout) < n)
			cout++;
		if (cout == len)
			return (&s[i]);
		cout = 0;
		i++;
	}
	return (NULL);
}
