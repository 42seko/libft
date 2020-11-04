/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:42:17 by seko              #+#    #+#             */
/*   Updated: 2020/11/04 19:45:11 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char	*p_dest;
	char	*p_src;

	p_dest = (char *)dest;
	p_src = (char *)src;
	if (src >= dest)
	{
		while (num--)
		{
			*p_dest = *p_src;
		}
	}
	else
	{
		p_dest += num;
		p_src += num;
		while (num--)
		{
			p_dest = p_src;
			p_dest--;
			p_src--;
		}
	}
	return (dest);
}
