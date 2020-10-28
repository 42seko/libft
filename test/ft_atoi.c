#include "libft.h"

int	ft_atoi(const char * str)
{
	int	num;
	int	sign;
	char *p;

	num = 0;
	sign = 1;
	p = (char *)str;
	while (*p == ' ' || (*p >= 9 && *p <= 13))
		p++;
	if ((*p == '-') || (*p == '+'))
		if ((*(p + 1) == '-') || (*(p + 1) == '+'))
			return (0);
	while (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign *= -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		num = num * 10 + *p - '0';
		p++;
	}
	return (num * sign);
}