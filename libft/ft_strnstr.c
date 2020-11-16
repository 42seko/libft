/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 21:25:54 by seko              #+#    #+#             */
/*   Updated: 2020/11/16 21:43:27 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	if (little[i] == '\0')
		return ((char *)big);
	if (len == 0)
		return (0);
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	while (i < len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(big + i, little, ft_strlen(little)) == 0)
			{
				if ((i + l_len) > len)
					return (0);
				return ((char *)(big + i));
			}
		}
		i++;
	}
	return (0);
}
