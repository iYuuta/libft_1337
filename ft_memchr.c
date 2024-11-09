#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*b;

	i = 0;
	b = (const unsigned char *)s;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
