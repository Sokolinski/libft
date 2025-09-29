/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:08:49 by msakalin          #+#    #+#             */
/*   Updated: 2025/09/29 12:30:31 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t ln)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)str;
	while (i < ln)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (tmp);
}
