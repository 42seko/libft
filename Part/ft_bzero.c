#include "libft.h"

void ft_bzero(void *ptr, size_t size)
{
	unsigned char *p_ptr;
	size_t i;

	i = 0;
	p_ptr = ptr;
	while (i < size)
	{
		p_ptr[i] = 0;
		i++;
	}
}
