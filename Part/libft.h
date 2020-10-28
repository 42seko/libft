# ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *ptr, size_t size);
void	*ft_memcpy(void *destination, const void *source, size_t num);
void	*ft_memccpy(void *destination, const void *source, int c, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t count);
void	*ft_memchr(void *per, int value, size_t num);
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
size_t	ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strrchr(const char *str, int character);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
int ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_calloc(size_t n, size_t size);
void	*ft_strdup(const char *s);

# endif
