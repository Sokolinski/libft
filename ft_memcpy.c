/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:37:43 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/05 16:48:29 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*to;
	char	*from;

	to = (char *) dest;
	from = (char *) src;
	i = 0;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (dest);
}
