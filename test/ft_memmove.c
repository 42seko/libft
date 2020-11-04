#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t num)
{
	char *p_dest;
	char *p_src;
	size_t i;

	p_dest = (char *)dest;
	p_src = (char *)src;
	i = 0;

	if (src >= dest)
	{
		while (num--)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
	{
		p_dest += num;
		p_src += num;
		while (num--)
		{
			p_dest = p_src;
			p_dest--;
			p_src--;
		}
	}
	return (dest);
}
