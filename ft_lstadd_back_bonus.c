#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	temp = ft_lstlast(*lst);
	if (temp)
	{
		temp->next = new;
		return ;
	}
	*lst = new;
}
