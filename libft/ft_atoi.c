/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:49:48 by seko              #+#    #+#             */
/*   Updated: 2020/11/04 19:50:12 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	num;
	int		sign;
	char		*p;

	num = 0;
	sign = 1;
	p = (char *)str;
	while (*p == ' ' || (*p >= 9 && *p <= 13))
		p++;
	if ((*p == '-') || (*p == '+'))
		if ((*(p + 1) == '-') || (*(p + 1) == '+'))
			return (0);
	if (*p == '-')
		`sign *= -1;
	while (*p >= '0' && *p <= '9')
	{
		if (num > 2147483647 && sign == 1)
			return (-1);
		else if (num > 2147483648 && sign == -1)
			return (0);
		num = num * 10 + *p - '0';
		p++;
	}
	return (num * sign);
}

int main(void)
{
	char n[40] = "-99999999999999999999999999";
	printf("%d", ft_atoi(n));
}
