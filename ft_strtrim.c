#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	s = (char *)malloc((end - start + 1) * sizeof(char));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1 + start, (end - start + 1));
	return (s);
}
