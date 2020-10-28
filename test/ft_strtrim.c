#include "libft.h"

int check_front(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i])
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break;
			j++;
		}
	if (j == '\0')
		return (i);
	i++;
	j = 0;
}
	
int check_end(char const * s1, char const *set)
{
	size_t i;
	size_t j;

	i = ft_strlen(s1);
	j = 0;
	while (i > 0)
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break;
			j++;
		}
	if (j == '\0')
		return (i);
	i--;
	j = 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *temp;
	int front;
	int end;
	size_t i;

	i = 0;
	front = check_front(s1, set);
	end = check_end(s1, set);
	if (!(temp = (char *)malloc(sizeof(char *) * (end - front + 2))))
		return (0);
	while (i < end + 1)
	{
		temp[i] = (s1 + front)[i];
		i++;
	}
	return (temp);
}
