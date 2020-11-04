#include "libft.h"
int	str_num(char const *s, char c)
{
	int i;
	int strnum;

	i = 0;
	strnum = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			strnum++;
			while (s[i] != c) // !!
				i++;
		}
	}
	return (strnum);
}
char	**all_free(char **temp, int i) //!!
{
	int j;

	j = 0;
	while (j < i)
	{
		free((char *)temp[j]);
		j++;
	}
	free(temp);
	return (NULL);
}

int check_size(char const *s, char c, int start)
{
	while (s[start] != c && s[start])
	{
		start++;
	}
	return (start);
}	

char	**ft_split(char const *s, char c)
{
	int s_i;
	int i;
	int size;
	char **temp;

	s_i = 0;
	i = 0;
	size = str_num(s, c);
	if (!s || !(temp = (char **)malloc(sizeof(char *) * (size + 1))))
			return (NULL);
	while (s[s_i])
	{
		while (s[s_i] == c && s[s_i])
			s_i++;
		size = check_size(s, c, s_i) - s_i;
		if (!s || !(temp[i] = (char *)malloc(sizeof(char) * (size + 1))))
			return (all_free(temp, i));
		ft_strlcpy(temp[i], (char *)s + s_i, size + 1); //!!
		i++;
		s_i++;
	}
	temp[i] = NULL;
	return (temp);
}
#include <stdio.h>
int main(void)
{
	char arr[50] = "apple, banana";
	char c = ',';
	char **temp;
	int i;

	temp = ft_split(arr,c);
	i = 0;
	while (i < 3)
	{
		printf("%s", temp[i++]);
	}
	return 0;
}
