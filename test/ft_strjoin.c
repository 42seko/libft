#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	char *temp;
	char *p_s1;
	char *p_s2;

	p_s1 = (char *)s1;
	p_s2 = (char *)s2;
	if (!(char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	ft_strlcat(p_s1, p_s2, ft_strlen(s1) + 1);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	return (temp);
}
