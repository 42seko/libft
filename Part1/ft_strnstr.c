#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t l_l;
	size_t b_l;
	size_t size;
	size_t i;

	if (little[i] == '\0')
		return (big);
	l_l = ft_strlen(little);
	b_l = ft_strlen(big);
	if (b_l < l_l || len < l_l)
		return (0);
	size = b_l > len ? len : b_l;
	while (size-- >= l_l)
	{
		if (ft_memcmp(big, little, l_l) == 0)
				return ((char *)big);
		big++;
	}
	return (0);
}
