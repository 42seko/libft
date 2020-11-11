/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:35:34 by seko              #+#    #+#             */
/*   Updated: 2020/11/04 19:37:10 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	void	*temp;

	temp = ptr;
	i = 0;
	while (i < num)
	{
		*((char*)temp + i) = value;
		i++;
	}
	return (ptr);
}
