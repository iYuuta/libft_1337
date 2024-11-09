#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*copy;

	if (!lst || !f || !del)
		return (NULL);
	copy = NULL;
	current = NULL;
	while (lst)
	{
		current = malloc(sizeof(t_list));
		if (!current)
			return (ft_lstclear(&copy, del), (NULL));
		current->content = f(lst->content);
		current->next = NULL;
		ft_lstadd_back(&copy, current);
		lst = lst->next;
	}
	return (copy);
}
