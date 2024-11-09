#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = (ft_strlen(s1) + 1);
	dup = (char *)malloc(len * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1, len);
	return (dup);
}
