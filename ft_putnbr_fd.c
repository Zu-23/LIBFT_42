/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:20:15 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/06 14:57:20 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nb;
	long	fatn;

	fatn = n;
	if (fatn < 0)
	{
		fatn *= -1;
		write(fd, "-", 1);
	}
	if (fatn <= 9)
	{
		nb = fatn + '0';
		write(fd, &nb, 1);
	}
	else if (fatn > 9)
	{
		ft_putnbr_fd(fatn / 10, fd);
		ft_putnbr_fd(fatn % 10, fd);
	}
}
