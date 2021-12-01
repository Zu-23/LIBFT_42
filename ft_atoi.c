/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:16:37 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/23 11:17:02 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long		i;
	long		sign;
	long		ret;
	char		*ptr;

	i = 0;
	sign = 1;
	ret = 0;
	ptr = (char *) str;
	while ((ptr[i] == '\t') || (ptr[i] == '\n') || (ptr[i] == '\v')
		|| (ptr[i] == '\f') || (ptr[i] == ' ') || (ptr[i] == '\r'))
		i++;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9' && ptr[i])
	{
		ret = ret * 10 + (ptr[i] - 48);
		i++;
	}
	return (ret * sign);
}
