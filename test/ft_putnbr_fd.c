/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:15:40 by seko              #+#    #+#             */
/*   Updated: 2020/11/09 23:02:18 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	num;

	num = n;
	if (num < 0)
	{
		num *= -1;
		ft_putchar('-', fd);
	}
	if (num < 10)
	{
		ft_putchar('0' + num, fd);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar('0' + (num % 10), fd);
	}
}
