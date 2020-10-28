void *ft_memmove(void *dest, const void *src, size_t num)
{
	char *p_dest;
	char *p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;

	if (src => dest)
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
