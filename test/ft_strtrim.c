/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seko <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:58:38 by seko              #+#    #+#             */
/*   Updated: 2020/11/10 01:27:31 by seko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	i = ft_strlen(s1);
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
	if (!(temp = (char *)malloc(sizeof(char *) * (end - front + 1))))
		return (0);
	j = front;
	while (i < end)
	{
		temp[i] = s1[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	return (temp);
}
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static void		ft_print_result(char const *s)
{
		int		len;

			len = 0;
				while (s[len])
							len++;
					write(1, s, len);
}

static void		check_strtrim(char *s1, char *set)
{
		char	*strtrim;

			if (!(strtrim = ft_strtrim(s1, set)))
						ft_print_result("NULL");
				else
							ft_print_result(strtrim);
					if (strtrim == s1)
								ft_print_result("\nA new string was not returned");
						else
									free(strtrim);
}

int				main(int argc, const char *argv[])
{
		char	set [] = "\t \n";
			int		arg;

				alarm(5);
					if (argc == 1)
								return (0);
						else if ((arg = atoi(argv[1])) == 1)
								{
											char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
													check_strtrim(s1, set);
														}
							else if (arg == 2)
									{
												char s1[] = "lorem ipsum dolor sit amet \n \t ";
														check_strtrim(s1, set);
															}
								else if (arg == 3)
										{
													char s1[] = " \n \t lorem ipsum dolor sit amet";
															check_strtrim(s1, set);
																}
									else if (arg == 4)
											{
														char s1[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
																check_strtrim(s1, set);
																	}
										else if (arg == 5)
												{
															char s1[] = "          ";
																	check_strtrim(s1, set);
																		}
											return (0);
}
