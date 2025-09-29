/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:06:28 by msakalin          #+#    #+#             */
/*   Updated: 2025/09/29 17:49:46 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*to;
	char	*from;
	char	tmp[n];
	
	to = (char *) dest;
	from = (char *) src;
	i = 0;
	while (i < n)
	{
		tmp[i] = from[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		to[i] = tmp[i];
		i++;
	}
	return (dest);
}
