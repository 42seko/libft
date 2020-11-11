/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:14:40 by seko              #+#    #+#             */
/*   Updated: 2020/11/06 19:18:41 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*p_dest;
	unsigned char	*p_src;

	i = 0;
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (src >= dest)
	{
		while (i < num)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (num > 0)
		{
			p_dest[num - 1] = p_src[num - 1];
			num--;
		}
	}
	return (dest);
}
