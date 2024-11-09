#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destl;
	size_t	srcl;

	i = 0;
	srcl = ft_strlen(src);
	destl = ft_strlen(dst);
	if (size == 0)
		return (srcl);
	if (size <= destl)
		return (size + srcl);
	while (i + destl < (size - 1) && src[i])
	{
		dst[destl + i] = src[i];
		i++;
	}
	dst[destl + i] = '\0';
	return (destl + srcl);
}
