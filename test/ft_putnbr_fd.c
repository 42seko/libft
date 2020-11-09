/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:15:40 by seko              #+#    #+#             */
/*   Updated: 2020/11/09 21:53:51 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-', fd);
	}
	if (n < 10)
	{
		ft_putchar('0' + n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar('0' + (n % 10), fd);
	}
}
