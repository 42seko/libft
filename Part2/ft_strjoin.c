char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	char *temp;

	if (!(char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	ft_strcat(s1, s2);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	return (temp);
}
