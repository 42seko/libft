#include "libft.h"

void 	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		*((char*)destination + i) = *((char*)source + i);
		i++;
	}
	return (destination);
}
