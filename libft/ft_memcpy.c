/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:39:23 by seko              #+#    #+#             */
/*   Updated: 2020/11/12 00:04:02 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t	i;

	i = 0;
	if (!destination && !source)
		return (0);
	while (i < num)
	{
		*((char*)destination + i) = *((char*)source + i);
		i++;
	}
	return (destination);
}
