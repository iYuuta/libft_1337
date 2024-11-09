#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*strc;

	strc = malloc(sizeof(t_list));
	if (!strc)
		return (NULL);
	strc->content = content;
	strc->next = NULL;
	return (strc);
}
