#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char num;

	while ((n / 10) >= 10)
	{
		num = n % 10 + '0';
		n = n / 10;
		write (fd, "num", 1);
	}
}
