/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoayedde <yoayedde@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 19:12:32 by yoayedde          #+#    #+#             */
/*   Updated: 2024-11-01 19:12:32 by yoayedde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
