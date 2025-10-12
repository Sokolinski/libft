/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:31:13 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/12 20:26:46 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cp_ln;
	size_t	src_ln;

	src_ln = ft_strlen(src);
	if (size > 0)
	{
		if (src_ln >= size)
			cp_ln = size -1;
		else
			cp_ln = src_ln;
		ft_memmove(dst, src, cp_ln);
		dst[cp_ln] = '\0';
	}
	return (src_ln);
}
