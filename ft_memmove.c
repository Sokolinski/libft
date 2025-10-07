/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:06:28 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/05 20:06:35 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*to;
	char	*from;

	to = (char *) dest;
	from = (char *) src;
	i = 0;
	if (to == from || n == 0)
		return (dest);
	if (to <= from)
	{
		while (i < n)
		{
			to[i] = from[i];
			i++;
		}
	}
	else if (to > from)
	{
		while (n--)
			to[n] = from[n];
	}
	return (dest);
}
