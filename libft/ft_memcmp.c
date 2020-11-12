/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:46:35 by seko              #+#    #+#             */
/*   Updated: 2020/11/12 19:41:42 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*p_ptr1;
	unsigned char	*p_ptr2;
	size_t			i;

	p_ptr1 = (unsigned char *)ptr1;
	p_ptr2 = (unsigned char *)ptr2;
	i = 0;
	while (i < num)
	{
		if (*p_ptr1 != *p_ptr2)
			return (*p_ptr1 - *p_ptr2);
		i++;
		p_ptr1++;
		p_ptr2++;
	}
	return (0);
}
