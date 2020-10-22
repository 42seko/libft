#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t i;
	void *temp;

	temp = ptr;
	i = 0;
	while (i < num)
	{
		*((char*)temp + i) = value;
		i++;
	}
	return (ptr);
}
