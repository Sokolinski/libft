/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:23:11 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/01 21:32:30 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	free_space;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	free_space = size - dst_len - 1;
	while (free_space != 0 && src[i])
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
		free_space--;
	}
	dst[dst_len] = '\0';
	return (dst_len + src_len - i);
}
