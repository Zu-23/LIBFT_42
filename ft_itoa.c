/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:06:26 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/23 12:13:54 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long	armstrong(long n)
{
	long	i;

	if (n < 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ifzero(int n)
{
	char	*ptr;

	n = 0;
	ptr = (char *) malloc(sizeof(char) * 2);
	ptr[n++] = '0';
	ptr[n] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	i;
	char	*ptr;
	long	fatn;

	if (n == 0)
		return (ifzero(n));
	fatn = n;
	i = armstrong(fatn);
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	if (fatn < 0)
	{
		fatn *= -1;
		ptr[0] = '-';
	}
	ptr[i--] = '\0';
	while (fatn)
	{
		n = (fatn % 10) + '0';
		fatn /= 10;
		ptr[i--] = n;
	}
	return (ptr);
}
