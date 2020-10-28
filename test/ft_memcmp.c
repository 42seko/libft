#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char *p_ptr1;
	unsigned char *p_ptr2;
	size_t i;

	p_ptr1 = (unsigned char *)ptr1;
	p_ptr2 = (unsigned char *)ptr2;
	i = 0;
	while (i < num)
	{
		if (*p_ptr1 > *p_ptr2)
			return (1);
		else if (*p_ptr1 < *p_ptr2)
			return (-1);
		p_ptr1++;
		p_ptr2++;
		i++;
	}
	return (0);
}
