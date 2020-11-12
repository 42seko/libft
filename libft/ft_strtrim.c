/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:58:38 by seko              #+#    #+#             */
/*   Updated: 2020/11/12 20:52:02 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int		check_front(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
		j = 0;
	}
	return (i);
}

int		check_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (i > 0)
	{
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i--;
		j = 0;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		front;
	int		end;
	int		i;
	int		j;

	i = 0;
	front = check_front(s1, set);
	end = check_end(s1, set);
	if (end <= front)
		return (ft_strdup(""));
	if (!(temp = (char *)malloc(sizeof(char) * (end - front + 2))))
		return (0);
	j = front;
	while (j <= end)
	{
		temp[i] = s1[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	return (temp);
}
