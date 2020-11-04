/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:12:35 by seko              #+#    #+#             */
/*   Updated: 2020/11/04 20:13:40 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			check_len(int n)
{
	size_t	len;

	len = 1;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*temp;
	char	*zero;
	size_t	len;

	len = check_len(n);
	zero = "0";
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	temp[len + 1] = '\0';
	if (n == 0)
		return (zero);
	while (n != 0)
	{
		if (n < 0)
		{
			temp[0] = '-';
			len++;
			n = n * -1;
		}
		temp[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (temp);
}
