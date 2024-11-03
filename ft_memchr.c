/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoayedde <yoayedde@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 11:37:31 by yoayedde          #+#    #+#             */
/*   Updated: 2024-11-01 11:37:31 by yoayedde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*b;

	i = 0;
	b = (const unsigned char *)s;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
