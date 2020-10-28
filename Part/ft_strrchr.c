#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	char	*last;
	char	letter;
	size_t	i;

	last = (char *)str;
	letter = (char)character;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (last[i] == letter)
		{
			return (last + i);
			i--;
		}
	}
	if (last[i] == letter)
		return (last);
	return (0);
}
