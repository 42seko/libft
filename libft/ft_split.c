/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:06:08 by seko              #+#    #+#             */
/*   Updated: 2020/11/10 00:44:11 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			str_num(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			num++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (num);
}

int			check_size(char const *s, char c, int start)
{
	int	i;
	int	temp;

	i = start;
	while (s[i] == c)
		i++;
	temp = i;
	while (s[i] && s[i] != c)
		i++;
	return (i - temp);
}

char		**all_free(char **temp, int malloc_len)
{
	int	i;

	i = 0;
	while (i < malloc_len)
	{
		free(temp[i]);
		i++;
	}
	free(temp);
	return (NULL);
}

char		*ft_strcpy(char *dest, char const *src, int len)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
		return (0);
	while (i < len - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		**ft_split(char const *s, char c)
{
	char	**temp;
	int		wrdnum;
	int		i;
	int		t_i;

	i = 0;
	t_i = 0;
	wrdnum = str_num(s, c);
	if (!s || !(temp = (char **)malloc(sizeof(char *) * (wrdnum + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!(temp[t_i] =
					(char *)malloc(sizeof(char) * (check_size(s, c, i) + 1))))
			return (all_free(temp, wrdnum + 1));
		temp[t_i] = ft_strcpy(temp[t_i], s + i, check_size(s, c, i) + 1);
		while (s[i] && s[i] != c)
			i++;
		t_i++;
	}
	temp[t_i] = NULL;
	return (temp);
}
