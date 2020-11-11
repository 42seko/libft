/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:40:44 by seko              #+#    #+#             */
/*   Updated: 2020/11/04 19:42:03 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t num)
{
	size_t			i;
	unsigned char	*p_dest;
	unsigned char	*p_source;
	unsigned char	letter;

	i = 0;
	p_dest = destination;
	p_source = (unsigned char *)source;
	letter = c;
	while (i < num)
	{
		p_dest[i] = p_source[i];
		if (p_source[i] == letter)
		{
			return (destination + (i + 1));
		}
		i++;
	}
	return (0);
}
