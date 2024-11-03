/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoayedde <yoayedde@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-02 20:13:37 by yoayedde          #+#    #+#             */
/*   Updated: 2024-11-02 20:13:37 by yoayedde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new=malloc(sizeof(t_list));
		if (!new)
			return (NULL);
		new->content = f(lst);
	}
	return (new);
}
