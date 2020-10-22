#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void *p;

	if (!(p = malloc(n * size)))
			return (NULL);
	while ((char *)p != '\0')
	{
		p = 0;
		p++;
	}
	return (p);
}
