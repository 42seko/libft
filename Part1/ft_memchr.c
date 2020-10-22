#include "libft.h"

void	*ft_memchr(void *per, int value, size_t num)
{
	size_t	i;
	unsigned char *p_per;
	unsigned char letter;

	p_per = (unsigned char *)per;
	letter = value;
	i = 0;
	while (i < num)
	{
		if (p_per[i] == letter)
			return ((p_per + i));
		i++;
	}
	return (0);
}
