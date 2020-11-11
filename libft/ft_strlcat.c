/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:47:57 by seko              #+#    #+#             */
/*   Updated: 2020/11/06 21:04:47 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	n = size - dest_len;
	if (dest_len >= size)
		return (size + ft_strlen((char *)src));
	while (src[i] && n != 1)
	{
		dest[i + dest_len] = src[i];
		n--;
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest_len + ft_strlen(src));
}
