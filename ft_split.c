#include "libft.h"

static size_t	cwords(char *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			count++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (count);
}

static size_t	cletters(char *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && str[i] == sep)
		i++;
	while (str[i] && str[i] != sep)
	{
		i++;
		count++;
	}
	return (count);
}

static void	freemyhomie(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	letters;
	size_t	i;
	size_t	j;
	char	**str;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	str = (char **)malloc((cwords((char *)s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[cwords((char *)s, c)] = 0;
	while (j < cwords((char *)s, c))
	{
		while (s[i] == c)
			i++;
		letters = cletters((char *)(s + i), c);
		str[j] = ft_substr(s, i, letters);
		if (!str[j])
			return (freemyhomie(str), NULL);
		i += letters;
		j++;
	}
	return (str);
}
