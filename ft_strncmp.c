/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:12:13 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/23 11:34:22 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	size_t				j;
	size_t				z;
	unsigned char		*pt_s1;
	unsigned char		*pt_s2;

	i = 0;
	j = 0;
	z = 0;
	pt_s1 = (unsigned char *) s1;
	pt_s2 = (unsigned char *) s2;
	while (pt_s1[i])
		i++;
	while (pt_s2[j])
		j++;
	while (z <= i && z <= j && z < n)
	{
		if ((pt_s1[z] - pt_s2[z] < 0) || (pt_s1[z] - pt_s2[z] > 0))
			return (pt_s1[z] - pt_s2[z]);
		z++;
	}
	return (0);
}
