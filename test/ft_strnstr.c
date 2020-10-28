char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	i = 0;
	if (little[i] == '\0')
		return (big);
	if (ft_strlen(big) > len)
	{
		while (i < len)
		{
			if (big[i] == little[i])
				if (ft_strncmp(big, little, ft_strlen(little) == 0))
					return (big);
			i++;
		}
		return (0);
	}
}
