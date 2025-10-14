/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:51:33 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/14 19:01:06 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	int		indicator;

	indicator = 1;
	len = size(n);
	if (n < 0)
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		indicator = -1;
	}
	res[len] = '\0';
	len -= 1;
	while (len >= 0 && res[len] != '-')
	{
		res[len] = ((n % 10) * indicator) + '0';
		n /= 10;
		len--;
	}
	return (res);
}
