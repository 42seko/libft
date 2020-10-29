#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] == str2[i])
		{
			i++;
			continue;
		}
		else if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}