/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:54:37 by seko              #+#    #+#             */
/*   Updated: 2020/11/23 19:17:36 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	length;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	length = ft_strlen(s + start);
	if (length < len)
		len = length;
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_strlcpy(temp, ((char *)s + start), len + 1);
	return (temp);
}
