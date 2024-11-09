#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			l;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	str = (char *)malloc((l + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < l)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
