/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoayedde <yoayedde@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 11:41:04 by yoayedde          #+#    #+#             */
/*   Updated: 2024-11-01 11:41:04 by yoayedde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (const char *)src;
	if (d < s)
		d = ft_memcpy(dst, src, len);
	else
	{
		while (len-- > i)
			d[len] = s[len];
	}
	return (dst);
}
