/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:54:37 by seko              #+#    #+#             */
/*   Updated: 2020/11/04 19:54:48 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;
	size_t	j;

	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = start;
	j = 0;
	while (i < len + start)
	{
		temp[j] = s[i];
		i++;
		j++;
	}
	temp[j] = '\0';
	return (temp);
}
