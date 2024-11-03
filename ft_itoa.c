/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoayedde <yoayedde@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 11:35:29 by yoayedde          #+#    #+#             */
/*   Updated: 2024-11-01 11:35:29 by yoayedde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(long n)
{
	size_t	s;

	s = 0;
	if (n < 0)
	{
		n = -n;
		s++;
	}
	if (n == 0)
		s++;
	while (n > 0)
	{
		n = n / 10;
		s++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	int		s;
	char	*str;

	i = 0;
	nb = n;
	s = size(nb);
	str = (char *)malloc((s + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[s--] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		str[i++] = '-';
	}
	while (s >= i)
	{
		str[s] = (nb % 10) + 48;
		nb /= 10;
		s--;
	}
	return (str);
}
