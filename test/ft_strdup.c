#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int	i;

	i = 0;
	if (!(dup = malloc(ft_strlen(s) + 1)))
		return (dup);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
