/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:12:35 by seko              #+#    #+#             */
/*   Updated: 2020/11/12 21:51:52 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			check_len(long long num)
{
	size_t	len;

	len = 1;
	while (num >= 10 || num <= -10)
	{
		num = num / 10;
		len++;
	}
	if (num < 0)
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	char		*temp;
	size_t		len;
	long long	num;

	num = n;
	len = check_len(num);
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (num < 0)
	{
		temp[0] = '-';
		num = num * -1;
	}
	if (num == 0)
		temp[0] = '0';
	temp[len] = '\0';
	while (num != 0)
	{
		temp[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (temp);
}
