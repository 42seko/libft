#include "libft.h"

char *ft_strcat(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	char *p;

	i = 0;
	j = 0;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	char *temp;
	char *p_p;
	i = 0;
	if (s1[i] == '\0')
		return ((char *)s2);
	if (s2[i] == '\0')
		return ((char *)s1);
	if (!(temp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	p_p = ft_strcat(s1, s2);
	/*while (p_p[i])
	{
		temp[i] = p_p[i];
		i++;
	}*/
	return (p_p);
}
