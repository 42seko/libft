/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:14:40 by seko              #+#    #+#             */
/*   Updated: 2020/11/14 04:48:51 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (src >= dest)
	{
		while (num--)
		{
			*p_dest++ = *p_src++;
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
