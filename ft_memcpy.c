/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoayedde <yoayedde@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 11:40:34 by yoayedde          #+#    #+#             */
/*   Updated: 2024-11-01 11:40:34 by yoayedde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*s1;
	char		*s2;

	i = 0;
	s1 = (const char *)src;
	s2 = (char *)dst;
	if (s1 == s2)
		return (dst);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dst);
}
