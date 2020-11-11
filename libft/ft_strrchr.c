/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:48:51 by seko              #+#    #+#             */
/*   Updated: 2020/11/06 22:13:42 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	char	*last;
	char	letter;
	size_t	i;

	last = (char *)str;
	letter = (char)character;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (last[i] == letter)
		{
			return (last + i);
		}
		i--;
	}
	if (last[i] == letter)
		return (last);
	return (0);
}
