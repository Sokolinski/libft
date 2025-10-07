/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:16:06 by marvin            #+#    #+#             */
/*   Updated: 2025/10/05 16:48:42 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*cstr;
	size_t			i;
	void			*result;

	i = 0;
	cstr = (unsigned char *) str;
	ch = (unsigned char) c;
	result = (void *) str;
	while (i < n)
	{
		if (ch == cstr[i])
			return (result + i);
		i++;
	}
	return (NULL);
}
