/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:08:49 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/01 19:11:23 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t ln)
{
	size_t	i;
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
