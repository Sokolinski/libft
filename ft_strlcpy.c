/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:31:13 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/01 19:13:35 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cp_ln;
	size_t	src_ln;

	src_ln = ft_strlen(src);
	if (size >= src_ln)
	{
		cp_ln = src_ln -1;
	}
	else if (size == 0)
		return (src_ln);
	cp_ln = size;
	ft_memmove(*dst, *src, cp_ln);
	return (src_ln);
}
